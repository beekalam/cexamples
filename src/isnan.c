#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc,char **argv){

    float x = 1.0f/0.0f;

    if (isnan(x))
        printf("\n x is nan.\n");


    return 0;

}
