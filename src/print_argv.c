#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv){
    while (*argv != NULL)
        printf("%s\n", *argv++);

    printf("\n");
    return 0;

}
