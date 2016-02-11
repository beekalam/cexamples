/*  sort a list of strings into alphabetical order using
 *  an array of pointers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reorder(int n, char *x[]);
int main(int argc,char **argv){
    int i, n=0;
    char *x[10];

    printf("Enter each string on a separate line below\n\n");
    printf("Type \' END \' when finished\n\n");
    /*  read in the list of strings */
    do {
        /*  allocate memory */
        x[n] = (char*) malloc (12 * sizeof(char));

        printf("string %d: ", n + 1);
        scanf("%s", x[n]);
    }while (strcmp(x[n++], "END"));
    /* reorder the list of strings  */
    reorder(--n, x);
    /* display the reordered list of strings */
    printf("\n\nReordered list of strings:\n");
    for(i =0; i < n; ++i)
        printf("\nstring %d: %s", i + 1, x[i]);
            
    return 0;

}
void reorder(int n, char *x[]) /*  rearrange the list of strings */
{
    char *temp;
    int i, item;

    for( item = 0; item <n - 1; ++item)

    /*find the lowest of all remaining strings */
        for(i = item +  1; i < n; ++i)
            if(strcmp( x[item], x[i]) > 0) {
                /*  interchanage the two strings */
                temp = x[item];
                x[item] = x[i];
                x[i] = temp;
            }
    return;
}

