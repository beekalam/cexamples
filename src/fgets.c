#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * nd of the string.
fgets() stops reading characters when a new line character is read or size−1 characters have been read, whichever comes first.
If fgets() is executed successfully, the read characters are stored in the memory pointed
by str and this pointer is returned. If either the end of file is reached or a read error
occurs, fgets() returns NULL.
 */
int main(int argc,char **argv){
    FILE *fp;
    char ch, str[100];
    int i, times;

    fp = fopen("test.txt", "w+");
    if(fp == NULL)
    {
        printf("Error: File can't be loaded\n");
        exit(1);
    }
    for(i = 0; i < 5; ++i)
    {
        printf("Enter name: ");
        gets(str);
        fprintf(fp, "%s\n", str);
    }
    printf("Enter char: ");
    ch = getchar();
    
    fseek(fp, 0, SEEK_SET);
    times = 0;
    while(1)
    {
        if(fgets(str, sizeof(str), fp) == NULL)
            break;
        if(str[0] == ch)
        {
            printf("Name: %s\n", str);
            times++;
        }
    }
     printf("Total occurrences = %d\n", times);
     fclose(fp);
    return 0;

}
