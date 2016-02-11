#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
/*
Consider a reusable container type. In order to be reusable, it must support a
way to apply arbitrary code to each element of the container. This is done by
creating an apply function that accepts a function pointer to which is passed
each element of the container contents.

A generic context pointer is also needed, represented here by void *p. The
example here is of a trivial container class that holds an array of ints, and a
user of that container that computes the maximum of those ints.

void apply(void *p, int *array, int dim, void (*fp)(void *, int))
{
    for (int i = 0; i < dim; i++)
        fp(p, array[i]);
}

struct Collection
{
    int array[10];
};

void comp_max(void *p, int i)
{
    int *pmax = (int *)p;

    if (i > *pmax)
        *pmax = i;
}

void func(struct Collection *c)
{
    int max = INT_MIN;

    apply(&max, c->array, sizeof(c->array)/sizeof(c->array[0]), comp_max);
}
While this works, it isn't very flexible.

 * 
 */
struct Collection
{
    int array[10];
};

void apply(void *p, int *array,int dim, void (*fp)(void *,int))
{
    for (int i = 0; i < dim; ++i)
        fp(p, array[i]);
}

void comp_max(void *p, int i)
{
    int *pmax = (int *)p;

    if (i > *pmax)
        *pmax = i;
}

void func(struct Collection *c)
{
    int max = INT_MIN;

    apply(&max, c->array, sizeof(c->array)/sizeof(c->array[0]), comp_max);

    printf("max: %d\n", max);
}

int main(int argc,char **argv){
    
    struct Collection col;
    for(int i = 0;i < 10; ++i)
        col.array[i] = i;

    func(&col);

    return 0;

}
