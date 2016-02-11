#include <stdio.h>
#include <unistd.h>
int main(int argc,char **argv){
    char buf[256];
    //char *getcwd(char *buf, size_t size);
    char *ret = getcwd(buf,sizeof(buf)/sizeof(buf[0]));
    //returns NULL if the directory name would exceed
    //the size of the buffer
    if(ret == NULL){
        printf("buf is not big enough\n");
    }else{
        printf("%s\n",buf);
    }
    return 0;

}
