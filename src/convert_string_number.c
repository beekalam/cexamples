#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv){
    int num;
    char *str = "100";
    
    num = atoi(str);
    printf("The string 'str' is %s and 'num' is %d\n",str,num);
    printf(" %s: %f\n","100.0",atof("100.0"));
    return 0;

}
