#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv){
    double num = 12345.678;
    char *str;
    int dec_pl, sign, ndigits = 3; //keep 3 digits for precision
    //the first argument is the number
    //the second argument is the number of digits to be stored
    //to the right of the decimal point
    //the third argument is a pointer to an integer that is used to return
    //the position of the decimal point int the converted string.
    //the fourth argument is a pointer to an integer that is used to return
    //the sign of  the converted string
    str = fcvt(num, ndigits, &dec_pl, &sign);
    printf("Original number: %f\n",num);
    printf("Converted string: %s\n",str);
    //print the location of decimal place
    printf("Decimal places: %d\n",dec_pl);
    printf("sign:            %d\n",sign);
    return 0;

}
