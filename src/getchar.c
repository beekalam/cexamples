#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv){
    /*  write a program that uses getchar() to read characters.
     *  The program should display and count the input characters */
    int ch, sum;

    printf("Enter characters: ");
    sum = 0;
    ch = getchar();
    while (ch != '\n')
    {
        sum++;
        printf("%c",ch);
        ch = getchar();
    }
    printf("\n Total number is = %d\n", sum);
    return 0;

}
