#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc,char **argv){
    float x = 3.1415;
    float y = 2.1;

    float f = fmodf(x, y);
    printf("remainder:%f\n", f);

    double  d = fmod(x, y);
    printf("remainder:%f\n", d);

    long  double r = fmodl(x,y);
    printf("remainder:%f\n", r);

    return 0;

}
