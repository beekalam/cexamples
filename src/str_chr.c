#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * Write a function that takes as parameters a character, an integer, and a string and
uses it as a pointer to check whether the character exists in the string or not. If not,
it should return NULL. Otherwise, if the integer is 0, it should return a pointer to
its first appearance, otherwise to the last one. Write a program that reads a string
(up to 100 characters), a character, and an integer, calls the function and displays
the part of the string after the appearance of the character. For example, if the
user enters "bootstrap", 't' and 0, the program should display tstrap. If it is
"bootstrap", 't' and 3, the program should display trap.
 */
char *str_chr(char str[],char ch, int f)
{
    /*  if the character is not found the function returns NULL */
    char *tmp = NULL;

    while(*str != '\0')
    {
        if (*str == ch)
        {
            tmp = str;
            /*  if the character is found and the choice is 0, the loop terminates
             *  and the function returns the pointer. If it isn't 0, tmp points
             *  to the place of the last appearance. */
            if (f == 0)
                break;
        }
        ++str;
    }
    return tmp;
}
int main(int argc,char **argv){
    char *ptr, ch, str[100];
    int flag;

    printf("Enter text: ");
    gets(str);

    printf("Enter character to  search: ");
    scanf("%c", &ch);
    printf("Enter choice (0-first, other-last): ");
    scanf("%d", &flag);

    ptr = str_chr(str, ch, flag);
    if(ptr == NULL)
        printf(" '%c' is not  included in the text\n", ch);
    else
        printf("The rest string is: %s\n", ptr);

    return 0;

}
