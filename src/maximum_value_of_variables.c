#include <stdio.h>
#include <limits.h>
int main(int argc,char **argv){
    printf("number of bits in char:%d\n",CHAR_BIT);
    printf("Maximum decimal integer value of char:%d\n",CHAR_MAX);
    printf("minimum decimal integer value of char:%d\n",CHAR_MIN);
    printf("maximum number of bytes in a multibyte character:%d\n",MB_LEN_MAX);
    printf("maximum decimal value of int:%d\n",INT_MAX);
    printf("miminm decimal value of int:%d\n",INT_MIN);
    //todo what is printf for long
    //printf("maximum decimal value of long:%l\n",LONG_MAX);
    //printf("minimum decimal value of long:%l\n",LONG_MIN);
    printf("maximum decimal value of signed char:%d\n",SCHAR_MAX);
    printf("minimum decimal value of unsigned char:%d\n",SCHAR_MIN);
    printf("maximum decimal value of short int:%d\n",SHRT_MAX);
    printf("minimum decimal value of short int:%d\n",SHRT_MIN);
    printf("maximum decimal integer value of unsigned char:%d\n",UCHAR_MAX);
    printf("Maximum decimal value of  an unsigned integer:%d\n",UINT_MAX);
    //todo ULONG_MAX for unsigned long int
    //todo USHRT_MAX for unsigned short int
    //UINT_MAX for unsigned integer
    return 0;

}
