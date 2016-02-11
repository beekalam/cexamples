#include <stdio.h>
int main () /* minimum field width specifications */
{
int i = 12345;
float x = 345.678;
printf ("%3d %5d %8d\n\n",i, i, i);
printf("%3f %10f %13f\n\n", x , x , x ) ;
printf("%3e %13e %16e", x , x , x ) ;
return 0;
}
/*
 * Notice the double newline characters in the first two printf statements. They will cause the lines of output to be double
spaced, as shown below.
When the program is executed, the following output is generated.
12345 12345 12345
345.678000 345.678000 345.678000
The first line of output displays a decimal integer using three different minimum field widths (three characters, five
characters and eight characters). The entire integer value is displayed within each field, even if the field width is too small
(as with the first field in this example).
The second value in the first line is preceded by one blank space. This is generated by the blank space separating the
first two character groups within the control string.
The third value is preceded by four blank spaces. One blank space comes from the blank space separating the last
two character groups within the control field. The other three blank spaces fill the minimum field width, which exceeds
the number of characters in the output value (the minimum field width is eight, but only five characters are displayed).
A similar situation is seen in the next two lines, where the floating-point value is displayed using f-type conversion
(in line 2) and e-type conversion (line 3).
 */
