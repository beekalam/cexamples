#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc,char **argv){
    char* str = "1234567891011121314151617181920";
    unsigned long num;
  char* leftover;
  num = strtoul(str, &leftover, 10);
  printf("Original string: %s\n", str);
  printf("Converted number: %lu\n", num);
  printf("Leftover characters: %s\n", leftover);
    return 0;

}
