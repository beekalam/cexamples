#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv){
    FILE *fp;
    char str[] = "This text will be saved in the file";
    int i;

    fp = fopen("test.txt", "w");
    if(fp == NULL){
      printf("Error: file can't be created\n");
      exit(1);
    }
    for(i = 0; str[i] != '\0'; ++i)
        fputc(str[i], fp);
    fclose(fp);
    return 0;

}
