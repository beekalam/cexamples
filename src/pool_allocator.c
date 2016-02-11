#include <stdio.h>
//definition of a hypothetical structure "foo"
struct foo{
    int  dummy1;
    char dummy2;
    long dummy3;
};
#include <stdlib.h>
//number of foos to malloc() at a time
#define NFOOS  64
// a union is used to provide a linked ist that
// can be overlaid on unused foos
union foo_u{
    union foo_u *next;
    struct foo  f;
};
static union foo_u *free_list;
struct foo *
alloc_foo()
{
    struct foo *ret = 0;
    if(!free_list){
        int i ;
        free_list = (union foo_u *)malloc(NFOOS * sizeof(union foo_u));
        if(free_list){
            for(i = 0; i < NFOOS - 1;i++)
                free_list[i].next = &free_list[i + 1];
            free_list[NFOOS - 1].next = NULL;
        }
    }
    if(free_list){
        ret = &free_list->f;
        free_list = free_list->next;
    }
    return ret;
}
void free_foo(struct foo *fp){
    union foo_u *up = (union foo_u *)fp;
    up->next = free_list;
    free_list = up;
}

int main(int argc,char **argv){
    int i;
    int n;
    struct foo **a;
    if(argc < 2){
        fprintf(stderr, "usage: %s f\n", argv[0]);
        fprintf(stderr, "where f is the number of");
        fprintf(stderr, " 'foo's to allocate\n");
        exit(1);
    }
    i = atoi(argv[1]);
    a =(struct foo **) malloc(sizeof(struct foo*) * i);
    for(n =0; n < i ;n++)
        a[n] = alloc_foo();
    for(n = 0; n < i; n++)
        free_foo(a[n]);

    return 0;

}
