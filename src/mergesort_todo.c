#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
//linked list impl
typedef struct listnode_s{
    struct listnode_s   *next;
    union{
        void *data;
        struct list_s *list;
        const char *str;
    }u;
}listnode_t;
typedef struct list_s{
    listnode_t  *head;
    listnode_t  *tail;
}list_t;
void appendNode(list_t *list,listnode_t *node){
    node->next = NULL;
    if(list->head)
    {
        list->tail->next = node;
        list->tail = node;
    }
    else
        list->head = list->tail = node;
}
listnode_t *removeHead(list_t *list){
    listnode_t    *node = 0;
    if(list->head)
    {
        node = list->head;
        list->head = list->head->next;
        if(list->head == NULL)
            list->tail = NULL;
        node->next = NULL;
    }
    return node;
}
void concatList(list_t *first, list_t *second){
    if(first->head)
    {
        if(second->head)
        {
            first->tail->next  =  second->head;
            first->tail = second->tail;
        }
    }
    else
        *first = *second;
    second->head = second->tail = NULL;
}

//return a copy of list_t from the heap
list_t *copyOf(list_t list){
    list_t *new = (list_t *)malloc(sizeof(list_t));
    *new = list;
    return new;
}

//allocate a new listnode_t from the heap
listnode_t *newNode(void *data){
    listnode_t   *new = (listnode_t *)malloc(sizeof(listnode_t));
    new->next = NULL;
    new->u.data = data;
    return new;
}
//allocate an empty list from the heap
list_t *newList(){
    list_t *new = (list_t *)malloc(sizeof(list_t));
    new->head = new->tail = NULL;
    return new;
}
//splits a list of strings into a list of lists of strings
//in which list of strings is sorted
static list_t split(list_t in){
    list_t out;
    list_t  *curr;
    out.head = out.tail = NULL;
    while(in.head)
    {
        curr = newList();
        do
        {
            appendNode(curr,removeHead(&in));
        }while(in.head && strcmp(curr->tail->u.str,
                                  in.head->u.str) <= 0);
        appendNode(&out,newNode(curr));
    }
    return out;
}
//merge two sorted lists into a third sorted list
static list_t merge(list_t first,list_t second){
    list_t out;
    out.head = out.tail = NULL;
    while(first.head && second.head){
        listnode_t *temp;
        if(strcmp(first.head->u.str,
                    second.head->u.str) <= 0)
            appendNode(&out, removeHead(&first));
        else
            appendNode(&out, removeHead(&second));
    }
    concatList(&out,&first);
    concatList(&out,&second);
    return out;
}
//takes a list of lists of strings and merges each
//pair of lists into a single list. the resulting 
//list has 1/2 as many lists as the original
static list_t mergePairs(list_t in){
    list_t out;
    out.head = out.tail= NULL;
    while(in.head)
    {
        if(in.head->next)
        {
            list_t *first = in.head->u.list;
            list_t *second = in.head->next->u.list;
            in.head->u.list= copyOf(merge(*first,*second));
            free(first);
            free(second);
            appendNode(&out, removeHead(&in));
            free(removeHead(&in));
        }
        else
            appendNode(&out, removeHead(&in));
    }
    return out;
}

int main(int argc,char **argv){
    char *array[]={"the","quick","brown","fox","jumps","over"};
   int i;
  list_t  out;
 out.head = out.tail = NULL;
  for(i= 0; array[i] ;++i){
      appendNode(&out,newNode((void *)array[i]));
  } 
  out = split(out);
  while (out.head != out.tail)
      out = mergePairs(out);
  if(out.head)
    out = *out.head->u.list;
  for(i=0;array[i];i++)
    array[i] = removeHead(&out)->u.str;

  return 0;

}
