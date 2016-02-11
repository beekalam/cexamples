#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc,char **argv){
    time_t timeval;

    (void)time(&timeval);
    printf("The date is: %s", ctime(&timeval));
    
    return 0;

}
