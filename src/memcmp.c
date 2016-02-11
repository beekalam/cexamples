#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define SIZE 100
int main(int argc,char **argv){
    int i, arr1[SIZE], arr2[SIZE];

    srand((unsigned int)time(NULL));
    for(i = 0; i < SIZE; ++i)
    {
        arr1[i] = rand();
        arr2[i] = rand();
        //arr2[i] = arr1[i];
    }
    if( memcmp(arr1, arr2, sizeof(arr1)) == 0)
        printf("Same content\n");
    else
        printf("Different contnet\n");
    return 0;

}
