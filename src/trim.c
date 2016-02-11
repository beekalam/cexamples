#include <stdio.h>
char *trim(char* phrase){
    char *old = phrase;
    char *new = phrase;
    while(*old == ' '){
        old++;
    }
    while(*old){
        *(new++) = *(old++);
    }
    *new = 0;
     return (char*) realloc(phrase,strlen(phrase)+1);
}
int main(int argc,char **argv){
    char *buffer = (char*)malloc(strlen("  cat")+1);
    strcpy(buffer,"   cat");
    printf("%s\n",trim(buffer));
    return 0;
}
