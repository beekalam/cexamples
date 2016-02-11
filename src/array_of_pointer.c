#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv){
  // an array of pointers is an array whose elements are pointers to the same
  // data type.
  int *arr[3], i = 100, j = 200, k = 300;
  
  arr[0] = &i;
  arr[1] = &j;
  arr[2] = &k;
  printf("%d %d %d\n", *arr[0], *arr[1], *arr[2]);
    return 0;

}
