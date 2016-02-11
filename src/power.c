#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef union {
    float fexp;       /*  floating-point exponent */
    int   nexp;
}nvals;

typedef struct {
    float x;          /*  value to be raised to a power */
    char flag;        /*  'f' if exponent is floating-point,
                          'i' if exponent is integer */
    nvals exp;
}values;
float power(values a); 
int main(int argc,char **argv){
    values a;         /*  structure containing x, flag and fexp/nexp */
    int i;
    float n, y;

    /* enter input data */
    printf("y = x^n \n\nEnter a value for x: ");
    scanf("%f", &a.x);
    printf("Enter a value for n: ");
    scanf("%f", &n);

    /*  determine type of exponent */
    i = (int) n;
    a.flag = (i == n) ? 'i' : 'f';
    if(a.flag == 'i')
        a.exp.nexp = i;
    else
        a.exp.fexp = n;
    /*  raise to the appropriate power and display the result */
    if (a.flag == 'f' && a.x <= 0.0 ) {
        printf("\nERROR - can not raise a non-positive number to a ");
        printf("floating-point power");
    } else {
        y = power(a);
        printf("\ny= %.4f", y);
    }
    return 0;
}

float power(values a) 
{
    int i;
    float y = a.x;
    
    if (a.flag == 'i') {  /* integer exponent */
        if(a.exp.nexp == 0)
            y = 1.0;      /*  zero exponent */
        else {
            for (i = 1; i < abs(a.exp.nexp); ++i)
                y *= a.x;
            if (a.exp.nexp < 0)
                y = 1./ y; /*  negative integer exponent */
        }
    }
    else                  /*  floating point exponent */
        y = exp(a.exp.fexp * log(a.x));
    return y;
}
