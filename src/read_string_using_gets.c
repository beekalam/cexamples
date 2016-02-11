#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv){
    char str[100];

    printf("Enter text: ");
    gets(str);
    printf("%s\n", str);
    return 0;

}
