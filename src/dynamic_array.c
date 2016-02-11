#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char **argv){

    int x;
    int array_length;
    int  *array;
    int  *newarray;

    newarray = (int *)realloc(array, (array_length + 1) * sizeof(int ));

    if (!newarray)
      printf("out of memory");

    array = newarray;
    array[array_length++] = x;

    return 0;

}
