#include <stdio.h>
#include <string.h>
static char buf[] = "Now is the time for all good men ...";

int main(int argc,char **argv){
    char *p;
    p = strtok(buf, " ");
    while(p){
        printf("%s\n", p);
        p = strtok(NULL," ");
    }

    return 0;

}
