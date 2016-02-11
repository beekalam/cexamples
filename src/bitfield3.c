#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char **argv){
    static struct {
        unsigned a : 5;    /*  begin first word */
        unsigned b : 5;
        unsigned   : 6;    /*  fill out first word */
        unsigned c : 5;     /*  forced to second word */
    }v = {1, 2, 3};
    printf("v.a = %d v.b = %d v.c = %d  \n",v.a ,v.b , v.c);
    printf("v requrires %d bytes\n", sizeof(v));
    return 0;

}
