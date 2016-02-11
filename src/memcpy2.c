#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100000
int main(int argc,char **argv){
    int i, arr1[SIZE], arr2[SIZE];

    for(i = 0; i < SIZE; ++i)
        arr1[i] = i + 1;
    memcpy( arr2, arr1, sizeof(arr1));
    /*  we use memcpy() rather than an iteration loop */
    for( i = 0; i < SIZE; ++i)
        printf("%d\n", arr2[i]);
    return 0;

}
