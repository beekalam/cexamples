#include <stdio.h>
int main(int argc,char **argv){
    int a, b, c;
    scanf("%3d %3d %3d", &a, &b, &c);
    /*
     * for input:
     * 1 2 3
     * a=1, b=2, c=3
     *
     * for input 
     * 123 456 789
     * a=123, b=456, c=789
     *
     * for input:
     * 123456789
     * a=123, b=456, c=789
     */
    printf("\na=%d, b=%d, c=%d\n",a ,b ,c);
    return 0;

}
