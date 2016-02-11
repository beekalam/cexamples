#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv){
    printf("%c %c\n", "message"[4], *("message" + 4));

    char *ptr;
    int i;
    ptr = "This is text";
    for( i = 0; ptr[i] != '\0'; ++i)
        printf("%c %c\n", *(ptr+i), ptr[i]);
    return 0;

}
