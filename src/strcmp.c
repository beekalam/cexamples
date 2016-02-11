#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv){
    char str1[100], str2[100];
    int ret;

    printf("Enter the first text: ");
    gets(str1);

    printf("Enter second text: ");
    gets(str2);

    ret = strcmp(str1, str2);

    if(ret == 0)
        printf("Same texts\n");
    else
    {
        printf("Differnt texts\n");
        if(strncmp(str1, str2, 3) == 0)
            printf("But the firt 3 chars are the same\n");
    }
    return 0;

}
