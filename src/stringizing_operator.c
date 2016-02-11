#include <stdio.h>
#define DEBUG_VALUE(v) printf( #v " is equal to %d\n",v)
int main(int argc,char **argv){
    int i = 12;
    DEBUG_VALUE(i);
    return 0;

}
