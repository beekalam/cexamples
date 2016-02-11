#include <stdio.h>
main() /* display a floating-point number with several different precisions */
{
  float x = 123.456;
  printf("%7f %7.3f %7.lf\n\n",x , x , x ) ;
  printf ("%12e%12.5e %12.3e", x , x , x ) ;

}
/*
The first line is produced by f-type conversion. Notice the rounding that occurs in the third number because of the
precision specification (one decimal place). Also, notice the leading blanks that are added to fill the specified minimum
field width (seven characters).
The second line, produced by e-type conversion, has similar characteristics. Again, we see that the third number is
rounded to conform to the specified precision (three decimal places). Also, note the leading blanks that are added to fill
the specified minimum field width (1 2 characters).
 */
