#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
/*  function prototypes */
void table(double (*pf)(double i, int m, double n), double a, int m, double n);
double md1(double i, int m, double n);
double md2(double i, int m, double n);
double md3(double i, int m, double n);

int main(int argc,char **argv){ /*  calculate the future value of a series of 
                                   monthly deposits*/
    int m;        /*  number of compounding periods per year */
    double n;     /*  number of years */
    double a;     /*  amount of each monthly payment */
    char freq;    /*  frequency of compounding indicator */
    /*  Enter input data */
    printf("\nFuture value of a series of monthly deposits\n");
    printf("Amount of each monthly payment:");
    scanf("%lf", &a);
    printf("Number of years: ");
    scanf("%lf", &n);

    /* enter frequency of compounding */
    do {
        printf("Freqency of compounding (A, S, Q, M, D, C): ");
        scanf("%1s", &freq);
        freq = toupper(freq);   /*  convert to upper case */
        if ( freq == 'A'){
            m = 1;
            printf("\nAnnual compounding\n");
        }
        else if (freq == 'S'){
            m = 2;
            printf("\nSemiannual Compounding\n");
        }
        else if (freq == 'Q'){
            m = 4;
            printf("\nQuarterly compounding\n");
        }
        else if (freq == 'M'){
            m = 12;
            printf("\nMonthly compounding\n");
        }
        else if (freq == 'D') {
            m = 360;
            printf("\nDaily Compounding\n");
        }
        else if ( freq == 'C') {
            m = 0;
            printf("\nContinous Compounding\n");
        }
        else
            printf("\nERROR - please repeat\n\n");
    }while (freq !='A' && freq != 'S' && freq != 'Q' &&
            freq !='M' && freq != 'D' && freq != 'C');

    /* carry out the calculations */
    if (freq == 'C')
        table(md3, a, m, n);   /*  continous compounding */
    else if (freq == 'D')
        table(md2, a, m, n);   /*  daily compounding */
    else
        table(md1, a, m, n);   /*  annual, semiannual , quarterly monthly compounding */
    
    
   
    return 0;

}
void table (double (*pf)(double i, int m, double n) , double a, int m, double n)
    /* table generator (this functions accepts a pointer to another function
     * as argument */
{
    int count;  /*  loop counter */
    double i;   /*  annual interest rate */
    double f;   /*  future value */

    printf("\nInterest rate future Amount\n\n");
    for( count = 1; count <= 20; ++count){
        i = 0.01 * count;
        f = a* (*pf)(i, m, n);  /*  Access the function passed as a pointer */
        printf("      %2d               %.2f\n", count, f);
    }
}
double md1(double i, int m, double n)
    /*  monthly deposits, periodic compounding */
{
    double factor, ratio;

    factor = 1 + i/m;
    ratio = 12 * (pow(factor, m*n) -1 ) / i;
    return(ratio);
}

double md2(double i, int m, double n)
    /*  monthly deposits, daily compounding */
{
    double factor, ratio;
    factor = i + i/m;
    ratio = (pow(factor, m*n) - 1) / (pow(factor, m/12) - 1);
    return(ratio);
}
double md3(double i, int dummy, double n)
    /*  Monthly deposits, continous compounding */
{
    double ratio;

    ratio = (exp(i*n) - 1) / (exp(i/12) - 1);
    return (ratio);
}
