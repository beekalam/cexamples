#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char buf[256];
#define print printf("%s\n",buf)

int main(int argc,char **argv){
    int val = -12;
    sprintf(buf,"%d",val);
    print;

    long int lval = -12;
    sprintf(buf, "%ld", lval);
    print;

    long long int llval = -12;
    sprintf(buf, "%lld", llval);
    print; 

    unsigned int uval = 12;
    sprintf(buf, "%u", uval);
    print;

    long unsigned int luval = 12;
    sprintf(buf, "%lu", luval);
    print;

    long long unsigned int lluval = 12;
    sprintf(buf, "%llu", lluval);
    print;

    float fval = 12.0;
    sprintf(buf, "%f", fval);
    print;

    double lfval = 12.0;
    sprintf(buf, "%Lf", lfval);
    print;
    return 0;

}
