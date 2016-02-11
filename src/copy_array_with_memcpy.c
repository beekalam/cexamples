#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv){
    int i;
    int x[5],y[5];
    for(i=0;i < 5;++i)
        x[5]=i;
    memcpy(x,y,sizeof(y));

    for(i=0;i < 5;++i)
        printf("%d ",y[i]);

    return 0;
}
