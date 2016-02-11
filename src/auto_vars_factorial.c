#include <stdio.h>
long int factorial(int n);
int main(int argc,char **argv){
    auto int n;
    /*  read in the integer quantity */

    printf("\nn= ");
    scanf("%d", &n);

    /*  calculate and display the factorial */
    printf("\nn != %ld \n", factorial(n));
    return 0;

}
long int factorial(int n)
{
    auto int i;
    auto long int prod = 1;

    if ( n > 1)
        for( i=2; i <= n; ++i)
            prod *=i;
    return prod;
}
