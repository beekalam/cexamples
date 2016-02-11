#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv){
    const int arraySize = 9;
    double a[arraySize];
    int i = 0;
    for( i = 0; i < arraySize; ++i)
        printf("address of a[%d]= %p\n", i,(void*)&a[i]);
    return 0;

}
