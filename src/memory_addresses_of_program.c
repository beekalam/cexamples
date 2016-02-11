#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void test();
int global;

int main(int argc,char **argv){
    int *ptr;
    int i;
    static int st;

    ptr = (int *)malloc(sizeof(int)); /*  allocate memory from the heap */
    if (ptr != NULL)
    {
        printf("Code seg: %p\n", test);
        printf("Data seg: %p %p \n", &global, &st);
        printf("stack seg: %p\n", &i);
        printf("Heap: %p\n", ptr);
        free(ptr);
    }
    return 0;

}
void test()
{

}
