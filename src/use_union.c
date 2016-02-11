#include <stdio.h>
typedef union _conversion{
    float fNum;
    unsigned int uiNum;
}Conversion;
int isPositive1(float number){
    Conversion conversion = { .fNum = number};
    return (conversion.uiNum &  0x80000000) == 0;
}
//The following function does not use a union and
//violates the strict aliasing rule since
//the ptrValue pointer shares the same address as number
int isPositive3(float number) {
  unsigned int *ptrValue = (unsigned int *)&number;
  return (*ptrValue & 0x80000000) == 0;
}

int main(int argc,char **argv){
    printf("%d\n",isPositive1(-1230.0));
    printf("%d\n",isPositive1(1234.0));
    //printf("%d\n", isPositive3(1234.0)); 
    return 0;
}
