#include <stdio.h>
int main(int argc,char **argv){
#ifdef __cplusplus
printf("c++ compiler");
#else
printf("c compiler");
#endif
    return 0;

}
