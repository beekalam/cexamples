#include <stdio.h>
#include <stdlib.h>
int main(int argc,char **argv){
    const char *str1 = "42";
    const char *str2 = "3.14159";
    const char *str3 = "31337 with words";
    const char *str4 = "words and 2";
 
    int num1 = atoi(str1);
    int num2 = atoi(str2);
    int num3 = atoi(str3);
    int num4 = atoi(str4);
    printf("atoi(%s) : %d\n",str1, num1);
    printf("atoi(%s) : %d\n",str2, num2);
    printf("atoi(%s) : %d\n",str3, num3);
    printf("atoi(%s) : %d\n",str4, num4);

    return 0;

}
