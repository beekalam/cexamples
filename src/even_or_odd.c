#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num & 1)
        printf("The number %d is odd\n", num);
    else
        printf("The number %d is even\n", num);

    /* an integer number is even or odd depending
     *  on whether its last bit is 0 or 1.If it is
     *  0 , the number is even; otherwise it's odd */
    return 0;

}
