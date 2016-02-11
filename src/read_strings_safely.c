#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv){
    char *str;
    int len;

    str = (char*)malloc(5000);
    if(str == NULL)
    {
        printf("Error: Not available memory\n");
        exit(1);
    }

    printf("Enter text: ");
    gets(str);
    
    len = strlen(str);
    str[len] = '\0';

    realloc(str, len+1);
    printf("%s\n", str);

    free(str);
    return 0;

}
