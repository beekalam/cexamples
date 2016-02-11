#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv){
    char tmpname[300];
    char *filename;
    FILE* tmpfp;
    filename = tmpnam(tmpname);
    printf("Temporary file name is:%s\n",filename);

    if(tmpfp)
    {
        printf("Opened a temporary file OK\n");
        fprintf(tmpfp,"aaaaaaaaaa");
    }
    else
        perror("tmpfile");

    return 0;

}
