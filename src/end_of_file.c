#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * the operating system may add a special character at the end of a text file
to mark its end, whereas none character marks the end of a binary file. In Windows, for
example, the CTRL-Z character with ASCII value 26 marks the end of a text file.


If this program runs on Windows, the loop will display only the characters 'a' and
'b' and the next call of getc() ends it because the read character with ASCII value 26
marks the end of file. On the other hand, had we used the "w+b" mode, the program
would have displayed all the characters since none character has a special significance
in a binary file.
 */
int main(int argc,char **argv){
    FILE *fp;
    int ch;
    fp = fopen("test.txt", "w+");
    if(fp == NULL)
    {
        printf("Error: File can’t be created\n");
        exit(1);
    }
    fprintf(fp, "%c%c%c%c%c\n", 'a', 'b', 26, 'c', 'd');
    fseek(fp, 0, SEEK_SET);
    while(1)
    {
        ch = getc(fp);
        if(ch == EOF)
            break;
        printf("%c", ch);
    }
    fclose(fp);
    return 0;

}
