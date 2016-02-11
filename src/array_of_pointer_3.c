#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv){
  // an array of pointers is an array whose elements are pointers to the same
  // data type.
    char *arr[3];
    int i;

    arr[0] = "This is";
    arr[1] = "a new";
    arr[2] = "message";
    for( i = 0; i < 3; ++i)
        printf("Text: %s\t First char: %c\n",arr[i], *arr[i]);
    return 0;

}
