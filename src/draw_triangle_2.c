#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv){
    int i , j;
    for( i = 1; i <= 4; ++i)
    {
       for(j = 0; j < i; ++j)
           printf("*");
       printf("\n");
    }
    return 0;

}
