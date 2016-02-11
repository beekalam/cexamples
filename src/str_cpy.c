#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *str_cpy(char *trg, const char *src)
{
    int i = 0;
    while (*(src + i) != '\0')
    {
        *(trg + i) = *(src + i);
        i++;
    }
    *(trg + i) = '\0';
    return trg;
}
int main(int argc,char **argv){
    char *trg, src[100];

    printf("Enter text: ");
    gets(src);
    /*  Allocate memory to store the input string and the null character */
    trg = (char *)malloc(strlen(src) + 1);
    if(trg == NULL)
    {
        printf("Error: Not available memory\n");
        exit(1);
    }
    printf("Copied text: %s\n", str_cpy(trg, src));
    free(trg);
    return 0;

}
