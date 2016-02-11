#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * The following program checks the returned value of scanf() to verify that the input
integer is successfully read and stored into num.
 */
int main(int argc,char **argv){
    int num;

    printf("Enter number: ");
    while (scanf ("%d", &num) != 1)
    {
        printf("Enter number: ");
        while (getchar() != '\n'); /*  consume the undread character */

    }
    printf("Inserted value:%d\n", num);
    return 0;

}
