#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv){
    char *arr;
    arr = (char *)malloc(6);
    if(arr != NULL)
    {
        memcpy(arr, "ABCDE", 6);
        printf("%s\n", arr);
        free(arr);
    }
    return 0;

}
