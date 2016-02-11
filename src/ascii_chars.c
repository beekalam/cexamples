#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv){
    int i;

    for(i = 0; i < 256; ++i)
        printf("Char = %c and its ASCII code = %d\n", i, i);
    return 0;

}
