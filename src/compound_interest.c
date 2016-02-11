#include <stdio.h>
#include <math.h>
int main(int argc,char **argv){
    float p, r, n, i, f;

    /*  read input data(including prompts) */
    printf("Please enter a value for the principal (P): ");
    scanf("%f", &p);
    printf("Please enter a value for the interest rate (r): ");
    scanf("%f", &r);
    printf("Please enter a value for the number of years (n): ");
    scanf("%f", &n);
    /*  calculate i, then f */
    i = r/100;
    f = p * pow((1+i),n);

    printf("\nThe final value (F) is: %.2f\n", f);
    return 0;

}
