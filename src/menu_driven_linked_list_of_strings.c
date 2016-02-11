#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NULL 0
struct list_element {
    char item[40];        /*data item for this node */
    struct list_element *next;  /*  point to the next node */
};
typedef struct list_element node;   /* structure type declaration */

int menu(void);
void create(node *pt);
node *insert(node *pt);
node *remove_p(node *);
void display(node *);
//node *locate(node *record, char *target[]);
int main(int argc,char **argv){
    node *start;        /*  pointer to the beginning of list */
    int choice;         /*  local variable declaration */

    do {
        choice = menu();
        switch (choice) {
            case 1:   /*  create the linked list */
                start = (node *)malloc(sizeof(node));
                create(start);
                printf("\n");
                display(start);
                continue;
            case 2:   /*  add one component  */
                start = insert(start);
                printf("\n");
                display(start);
                continue;
            case 3: /*  delete one component */
                start = remove_p(start);
                printf("\n");
                display(start);
                continue;
            default:
                printf("End of computation\n");
        }
    }while(choice != 4);

    return 0;
}
int menu(void) /*  generate the main menu */
{
    int choice;

    do {
        printf("\nMain menu:\n");
        printf("  1 - CREATE the linked list \n");
        printf("  2 - ADD a component\n");
        printf("  3 - DELETE a component\n");
        printf("  4 - END\n");
        printf("Please enter your choice (1, 2, 3 or 4) -> ");
        scanf("%d", &choice);
        if( choice < 1 || choice > 4)
            printf("\nError - please try again\n");
    }while (choice < 1 || choice > 4);
    printf("\n");
    return choice;
}

void create(node *record)   /*  create a linked list  */
{
    /*  argument points to the current node */
    printf("Data item (type \'END\' when finished): ");
    scanf(" %[^\n]", record->item);

    if(strcmp(record->item, "END") == 0)
        record->next = NULL;
    else {
        /*  allocate space for next node */
        record->next = (node *) malloc (sizeof(node));

        /*  create the next node */
        create(record->next);
    }
    return;
}

void display(node *record)  /*  display the linked list */
{
    /* argument points to the current node  */
    if ( record->next != NULL) {
        printf("%s\n", record->item);   /* display this data item */
        display(record->next);
    }
    return;
}

node *locate(node *record, char *target[])
    /*  return a pointer to the node BEFORE the target node
     *  the first argument points to the current node
     *  the second argument is the target string */
{
    if ( strcmp(record->next->item, target) == 0)  
        return (record);
    else
        if (record->next->next == NULL)    /*  end of list */
            return (NULL);
        else
            locate(record->next, target);
}

node *insert(node *first)   /*  add one component to the linked list return a
                              a pointer to beginning of the modified list*/
{
    /*  arguments points to the first node */
    node *locate(node*, char *[]);    /* function declaration */
    node *newrecord;                /*  pointer to new node */
    node *tag;                      /*  pointer to node BEFORE target node */
    char newitem[40];
    char target[40];

    printf("New data item: ");
    scanf(" %[^\n]", newitem);
    printf("Place before (type \'END\' if last): ");
    scanf(" %[^\n]", target);

    if(strcmp (first->item, target) == 0) {
        /*  new node is first in list  */

        /*  allocate space for the new node */
        newrecord = (node *) malloc(sizeof(node));

        /* assign the new data item to newrecord->item */
        strcpy(newrecord->item, newitem);

        /* assign the current pointer to newrecord->next */
        newrecord->next = first;

        /*  new pointer becomes the beginning of the list */
        first = newrecord;
    }else {
        /*  insert new node after an existing node
         *  locate the node PRECEDING the target node */
        tag = locate(first, target);

        if(tag == NULL)
            printf("\nMatch not found - Please try again\n");
        else {
            /*  allocate space for the new node  */
            newrecord = (node *) malloc(sizeof(node));

            /*  assign the new data item to newrecord->item */
            strcpy(newrecord->item, newitem);

            /*  assign the next pointer to newrecord->next  */
            newrecord->next = tag->next;

            /*  assign the new pointer to tag->next */
            tag->next = newrecord;
        }
    }
    return (first);
}

node *remove_p(node *first) /*  remove (delete) one component from the linked list
                              return a pointer to begining of the modified list*/
{
    /*  argument points ot the first node */
    node *locate(node*, char*[]);   /*  function declaration */
    node *tag;                     /*  poiont to node BEFORE target node  */
    node *temp;                    /*  temporary pointer */
    node target[40];               /*  data item to be deleted */
    printf("Data item to be deleted: ");
    scanf(" %[^\n]", target);

    if(strcmp(first->item, target) == 0){
        /*  delete the first node */

        /*  mark the node following the target node */
        temp = first->next;
        /* free space for the target node */
        free(first);

        /*  adjust the pointer to the first node */
        first = temp;
    }else{
        /*  delete a data item other than the first */
        /* locate the node PRECEDING the target node */
        tag = locate(first, target);

        if(tag == NULL)
            printf("\nMatch not found - please try again\n");
        else {
            /*  mark the node following the target node */
            temp = tag->next->next;

            /* free space for the target node */
            free(tag->next);

            /* adjust the link to the next node */
            tag->next = temp;
        }
    }
    return first;
}
