#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv){
    char str1[100], str2[100];
    char str3[200] = {0};

    printf("Enter first text: ");
    gets(str1);

    printf("Enter second text: ");
    gets(str2);

    strcat(str3,str1);
    strcat(str3, str2);
    printf("The merged text is: %s\n", str3);
    return 0;

}
