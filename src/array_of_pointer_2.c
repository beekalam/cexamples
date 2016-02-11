#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv){
  // an array of pointers is an array whose elements are pointers to the same
  // data type.
   int *arr[3], i, p[3] = {10, 20, 30};
  for(i = 0; i < 3; ++i)
  {
      arr[i] = &p[i];
      printf("%d ", *arr[i]);
  } 
    return 0;

}
