#include <stdio.h>
main ( ) /* m i n i m u m field width specifications */
{
int i = 12345;
float x = 345.678;
printf("%3d %5d %8d\n\n",i, i, i);
printf("%3g %log %13g\n\n",x , x , x ) ;
printf("%3g %13g %16g", x , x , x ) ;
}
