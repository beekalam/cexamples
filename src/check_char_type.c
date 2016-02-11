#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*  Write a program that reads a character and checks if it is a new
 *  line character, a space, a digit, or a letter. */
int main(int argc,char **argv){
    char ch;

    printf("Enter character: ");
    scanf("%c", &ch);
    
    if(ch == ' ')
        printf("The character is a space\n");
    else if (ch == '\n')
        printf("The character is a new line\n");
    else if (ch >= '0' && ch <= '9')
        printf("The character is a number\n");
    else if (ch >= 'a' && ch <= 'z')
        printf("The character is a lower case letter\n");
    else if (ch >= 'A' && ch <= 'Z')
        printf("The character is an upper case letter\n");
    return 0;

}
