#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv){
    int *ptr;

    printf("Val = %p\n", ptr);
    ptr = NULL;
    printf("Val = %p\n", ptr);

    return 0;

}
