#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv){
    void *ptr;
    int i = 10;

    ptr = &i;
    //to access the content of  a memory address
    // pointed by a void* pointer, typecast is
    // necessary
    *(int*)ptr += 20;
    printf("%d\n", i);
    return 0;

}
