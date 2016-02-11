#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv){
    int num;

     printf("Enter a number:");
     scanf("%d", &num);

     if (num >= 0)
         printf("The absolute value is %d\n", num);
     else
         printf("The absolute value is %d\n", -num);
    return 0;

}
