#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(int argc,char **argv){
    FILE *fpt;
    char c;
    fpt =fopen("sample.dat", "w");
    do
        putc(toupper(c = getchar()), fpt);
    while ( c != '\n');

    fclose(fpt);
    return 0;

}
