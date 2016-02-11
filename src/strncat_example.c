#include <stdio.h>
#include <string.h>
#define MAXBUF 16
int main(int argc,char **argv){
    char buf[MAXBUF];
    int i;
    buf[MAXBUF - 1] ='\0';
    strncpy(buf, argv[0], MAXBUF -1);
    for(i=1; i < argc; ++i){
        strncat(buf, " ", MAXBUF -1 -strlen(buf));
        strncat(buf, argv[i], MAXBUF - 1 - strlen(buf));
    }
    puts(buf);
    return 0;

}
