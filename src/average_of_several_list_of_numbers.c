#include <stdio.h>
int main(int argc,char **argv){
    int n, count, loops, loopcount;
    float x, average, sum;

    /*  read the number of lists */
    printf("How many lists?");
    scanf("%d", &loops);
    /* outer loop (process each list of numbers */
    for(loopcount = 1; loopcount <= loops ;++loopcount){
        /*  Initialize and read in a value for n */
        sum = 0;
        printf("\nList number %d\nHow many numbers? ", loopcount);
        scanf("%d", &n);

        /*  read in the numbers */
        for (count = 1; count <= n; ++count){
            printf("x = ");
            scanf("%f", &x);
            sum += x;
        }
        average = sum / n;
        printf("\nThe average is %f\n", average);
    }
    return 0;

}
