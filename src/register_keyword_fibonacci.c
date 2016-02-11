#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main(int argc,char **argv){
    time_t start, finish;
    long count, n = 23;
    long int loop, loopmax = 100000000;
    register int f, f1, f2;
    time(&start);
    for(loop = 1; loop <= loopmax; ++loop){
        f1 = 1;
        f2 = 1;
        for(count = 1; count <= n ; ++count){
            f = (count < 3) ? 1 : f1 + f2;
            f2 = f1;
            f1 = f;
        }
    }
    /*  adjust the counter and tag the completion time */
    --count;
    time(&finish);
    /* display the output */
    printf("i = %d   F = %d\n", count, f);
    printf("elapsed time: %.03f seconds", difftime(finish, start));

    return 0;

}
