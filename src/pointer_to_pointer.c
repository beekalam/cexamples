#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv){
    int *ptr1, **ptr, i = 20;

    ptr1 = &i;
    ptr = &ptr1;

    printf("Val = %d\n", **ptr);
    return 0;

}
