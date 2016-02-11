#include <stdio.h>
#include <string.h>
typedef struct _employee{
    char name[32];
    unsigned char age;
}Employee;

typedef void(*DISPLAY)(void*);
typedef int(*COMPARE)(void*,void*);

int compareEmployee(Employee *e1, Employee *e2){
    return strcmp(e1->name,e2->name);
}

void displayEmployee(Employee* employee){
    printf("%s\t%d\n",employee->name, employee->age);
}
//========  linked list types ========
typedef struct _node{
    void *data;
    struct _node *next;
}Node;
typedef struct _linkedList{
    Node *head;
    Node *tail;
    Node *current;
}LinkedList;
void initializeList(LinkedList *list){
    list->head = NULL;
    list->tail = NULL;
    list->current = NULL;
}
void addHead(LinkedList *list,void* data){
    Node *node = (Node*)malloc(sizeof(Node));
    node->data = data;
    if(list->head== NULL){
        list->tail = node;
        node->next = NULL;
    }else{
        node->next = list->head;
    }
    list->head = node;
}
void addTail(LinkedList *list, void* data){
    Node *node = (Node*) malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    if(list->head == NULL){
        list->head = node;
    }else{
        list->tail->next = node;
    }
    list->tail = node;
}
//variable node initially points to the list's
//head and traverses the list until either a match is found or  the linked
//list's end is encountered.The compare function is invoked to determine
//whether a match is found
Node *getNode(LinkedList *list,COMPARE compare,void* data){
    Node *node = list->head;
    while(node != NULL){
        if(compare(node->data,data) == 0){
            return node;
        }
        node = node->next;
    }
    return NULL;
}

void delete(LinkedList *list, Node *node){
    if (node == list->head){
        if (list->head->next == NULL){
            list->head = list->tail= NULL;
        }else {
            list->head = list->head->next;
        }
    }else{
        Node *tmp = list->head;
        while (tmp != NULL && tmp->next != node){
            tmp = tmp->next;
        }
        if (tmp != NULL){
            tmp->next = node->next;
        }
    }
    free(node);
}
void displayLinkedList(LinkedList *list, DISPLAY display){
    printf("\nLinked List\n");
    Node *current = list->head;
    while (current != NULL){
        display(current->data);
        current = current->next;
    }
}
typedef LinkedList Queue;
void initializeQueue(Queue *queue){
    initializeList(queue);
}
void enqueue(Queue* queue,void *node){
    addHead(queue,node);
}
void *dequeue(Queue *queue){
    Node *tmp = queue->head;
    void *data;
    //empty queue
    if(queue->head==NULL){
        data = NULL;
    }else if(queue->head == queue->tail){  //single node queue
        queue->head = queue->tail = NULL;
        data = tmp->data;
        free(tmp);
    }else{    //multiple node queue
        while(tmp->next != queue->tail){
            tmp = tmp->next;
        }
        queue->tail = tmp;
        tmp = tmp->next;
        queue->tail->next = NULL;
        data = tmp->data;
        free(tmp);
    }
    return data;
}
int main(int argc,char **argv){
    Queue queue;
    initializeQueue(&queue);

    Employee *samuel = (Employee*) malloc(sizeof(Employee));
    strcpy(samuel->name, "Samuel");
    samuel->age = 32;

    Employee *sally = (Employee*)malloc(sizeof(Employee));
    strcpy(sally->name,"Sally");
    sally->age = 28;

    Employee *susan = (Employee*)malloc(sizeof(Employee));
    strcpy(susan->name, "Susan");
    susan->age = 45;

    enqueue(&queue, samuel);
    enqueue(&queue, sally);
    enqueue(&queue, susan);
    void *data = dequeue(&queue);
    printf("Dequeued %s\n",((Employee*)data)->name);
    data = dequeue(&queue);
    printf("Dequeued %s\n",((Employee*)data)->name);
    data = dequeue(&queue);
    printf("Dequeued %s\n",((Employee*)data)->name);
    return 0;

}
