#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void str_cat(char *fin, char *str1, char *str2){
    while( *str1 != '\0')
        *fin++ = *str1++;

    /*  copy the second string right after the first one */
    while (*str2 != '\0')
        *fin++ = *str2++;
    *fin = '\0';  
}

int main(int argc,char **argv){
    char *fin, str1[100], str2[100];
    printf("Enter first text: ");
    gets(str1);

    printf("Enter second text: ");
    gets(str2);

    /*  Allocate memory to store both strings and the null character */
    fin = (char*) malloc(strlen(str1) + strlen(str2) + 1);
    if (fin == NULL)
    {
        printf("Error: Not available memory\n");
        exit(1);
    }
    str_cat(fin, str1, str2);
    printf("Merged text: %s\n", fin);
    free(fin);
    return 0;

}
