#include <stdio.h>
#include <errno.h>
#include <string.h>
int main(int argc,char **argv){
    printf("%s\n", strerror(EPERM));
    printf("ENOENT: %s \n", strerror(ENOENT));
    printf("EINTR:  %s \n", strerror(EINTR));
    printf("EIO:   %s \n",  strerror(EIO));
    printf("EBUSY: %s  \n", strerror(EBUSY));
    return 0;

}
