#include <stdio.h>
int main(int argc,char **argv){
    int i;
    float x;

    scanf("%d a %f", &i, &x);

    printf("\n %d %f\n",i , x);
    return 0;

}
/*
 * Unrecognized characters within the control string are expected to be matched by the same characters in
the input data.
If the input data consist of
1 a 2.0
then the decimal integer 1 will be read in and assigned to i,the character a will be read in but subsequently ignored, and
the floating-point value 2.0 will be read in and assigned to x.
On the other hand, if the input were entered simply as
1 2.0
 */
