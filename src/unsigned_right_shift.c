#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * The right shift operators >> and >>= are signed shifts if the left
 * operand is a signed integral type, and are unsigned right shifts if
 * the left operand is an unsigned integral type. To produce an
 * unsigned right shift on an int, a cast is necessary: 
int i, j;
...
j = (unsigned)i >> 3;
If i is an int, this works fine. But if i is of a type created with typedef, 
myint i, j;
...
j = (unsigned)i >> 3;
and myint happens to be a long int, then the cast to unsigned will
silently throw away the most significant bits, corrupting the answer
 */
int main(int argc,char **argv){
    int i = 12;
    int j = 13;

    j = (unsigned)i >> 3;
    return 0;

}
