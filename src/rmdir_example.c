#include <stdio.h>
#include <unistd.h> 
int main(int argc,char **argv){
    int ret = mkdir("newdir");
    //int rmdir(const char *path);
    //the rmdir system call removes dir, but only
    //if  they are empty
    ret = rmdir("newdir");
    return 0;

}
