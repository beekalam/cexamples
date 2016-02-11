#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv){

    //c initializes array by positional dependence;
    int a[3] = {3, 2, 2 };

    //nested arrays may or may not have {}:
    int  b[3][2] = { 2,3, {6,5}, 3,4 };

    
    return 0;

}
