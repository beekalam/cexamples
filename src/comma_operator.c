#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv){
    //here comma separator is used to
    //separate 3 variables declarations
    int i,j,k;
    //using comma to perform multiple initializations
    i=0,j=1,k=2;
    printf("i=%d, j = %d, k = %d\n",i,j,k);
    //here the comma separator is used to execute
    //3 expressions assign k to i, increment j, increment k
    //the value that i receives is always the rightmost
    //expression
    i= (j++,k++);
    printf("i=%d, j = %d, k = %d\n",i,j,k);
    //here the while statement uses comma operator
    //to assign the value of i as well as test i
    while(i = (rand() % 100), i != 50)
        printf("i is %d, trying again...\n",i);
    printf("\nGuess what?i is 50!\n");
    return 0;

}
