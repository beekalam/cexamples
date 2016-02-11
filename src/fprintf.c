#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv){
    FILE *fp;
    int i;

    fp = fopen("test.txt", "w");
    if( fp == NULL)
    {
        printf("Error: File can't be created\n");
        exit(1);
    }
    fputs("Hello_1\n", fp);
    for(i = 0; i < 3; ++i)
        fprintf(fp, "%d.%s\n", i+1, "Hello_2");
    fclose(fp);
    return 0;

}
