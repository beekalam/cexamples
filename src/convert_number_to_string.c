#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main(int argc,char **argv){

   int num = 100; 
   char str[25];
   itoa(num, str, 10);
//   sprintf(str,"%d",num);
//   ltoa() and ultoa() are not ansi
//     ltoa(num, str, 10);
   printf("the number 'num' is %d and the string 'str' is:%s",num,str);

    return 0;


}
