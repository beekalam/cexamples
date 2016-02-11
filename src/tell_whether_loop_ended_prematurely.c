#include <stdio.h>
#define REQUESTED_BLOCKS 512
int x;
char *cp[REQUESTED_BLOCKS];

int main(int argc,char **argv){
    for(x=0; x < REQUESTED_BLOCKS;x++){
        cp[x] = (char*)malloc(10000);
        //break;
        if(cp[x] == (char*)NULL)
            break;
    }
    //if x is less than REQUESTED_BLOCKS
    //then loop has ended prematurely
    if(x < REQUESTED_BLOCKS)
        printf("Bummer! My loop ended prematurely\n");
    return 0;
}
