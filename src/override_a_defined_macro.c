#include <stdio.h>
#define TRUE  1


int main(int argc,char **argv){

#ifdef TRUE
#define TRUE 0
#endif
    printf("TRUE:%d\n",TRUE);
    return 0;

}
