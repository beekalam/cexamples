#include <stdio.h>
int main(int argc,char **argv){
    //print in scientific notation
    float f = 123456.78;
    printf(" scientific: %e \n", f);
    printf("%10s\n","Hello");
    printf("%-10s\n","Hello");
    printf("%10d\n", 1234);
    printf("%-10d\n", 1234);
    printf("%010d\n", 1234);
    printf("%10.4f\n", 12.34);
    printf("%*s\n",10, "Hello");
    printf("\n------------------------\n");
    double x = 5000.0, y = 0.0025;
    printf("%f %f %f %f\n\n", x, y, x*y, x/y);
    printf("%e %e %e %e\n\n",x, y, x*y, x/y);
    printf("%c\n", 'w');
    printf("%s\n", "Some text");
    printf("%d\n", -100);
    printf("%f\n", 1.56);
    printf("%e\n", 100.25);
    printf("%X\n", 15);
    printf("%O\n", 14);
    printf("%d%%\n", 100);

    float a = 1.23456;

    printf("Val = %f\n", a);
    printf("Val = %.2f\n", a);
    printf("VAl = %.*f\n", 3, a);
    printf("Val = %.f\n", a);

    char msg[] = "This is a sample text";
    printf("%s\n", msg);
    printf("%.6s\n", msg);
    printf("%.30s\n", msg);

    //field number
    int aa = 100;
    float bb = 1.2365;
    printf("%10d\n", aa);
    printf("%10f\n", bb);
    printf("%10.3f\n", bb);
    printf("%*.3f\n", 6, bb);
    printf("%2d\n", aa);
    printf("%6f\n", bb);

    //prefix
    short sa = 10;
    long  lb = 10000;
    printf(" %hd %ld\n", sa, lb);

    //flags
    int ia = 12;
    
    printf("%-4d\n", ia);
    printf("%+4d\n", ia);
    printf("% d\n", ia);
    printf("%#0X\n", ia);
    printf("%#o\n", ia);
    printf("%04d\n", ia);

    return 0;

}
/*
 * c Display the character that corresponds to an integer value.
d, i Display a signed integer in decimal form.
u Display an unsigned integer in decimal form.
f Display a floating-point number in decimal form using a decimal point. The default
precision is six digits after the decimal point.
s Display a sequence of characters.
e, E Display a floating-point number in scientific notation using an exponent. The exponent
is preceded by the specifier.
g, G Display a floating-point number either in decimal form (%f) or scientific notation (%e).
p Display the value of a pointer variable.
x, X Display an unsigned integer in hex form: %x displays lowercase letters (a-f), while %X
displays uppercase letters (A-F).
o Display an unsigned integer in octal.
% Display the character %.


- Left aligns the output value within the defined field width.
+ Prefixes the output positive values with +.
space Prefixes the output positive values with a space character.
# Prefixes octal numbers with 0 and hex numbers with 0x or 0X. When used
with floating-point numbers, it forces output to contain a decimal point.
0 Pads with zeros until the defined width is reached.
*/

