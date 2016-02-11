#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv){
    unsigned i = 0x5b3c;

    printf("hexadecimal values:   i = %X      ~i = %X \n", i, ~i);
    printf("decimal equivalents:  i = %u      ~i = %u \n", i, ~i);
    return 0;

}
