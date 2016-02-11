#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv){
    int *ptr, i;

    ptr = &i;
    /*  the * and & operator cancel each other when used togther */
    printf("%p %p %p\n", &i , *&ptr, &*ptr);
    return 0;

}
