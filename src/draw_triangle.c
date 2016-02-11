#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv){
    int count, lines, n;

    printf("number of lines = ");
    scanf("%d", &n);
    printf("\n");

    for(lines = 1; lines <= n; lines++){
        for( count = 1; count <= n - lines; count++)
            putchar(' ');
        for ( count = 1; count <= 2 * lines - 1; count++)
            putchar('*');
        printf("\n");
    }
    return 0;

}
