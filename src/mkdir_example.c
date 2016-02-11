#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
int main(int argc,char **argv){
    int i = mkdir("newdir",NULL);
    if(i == -1){
        printf("\ncould not create dir\n");
    }
    return 0;

}
