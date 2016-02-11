#include <stdio.h>
int main(int argc,char **argv){
    int i;
    float x;
    char c;
    
    scanf("%3d %5f %c", &i, &x, &c);
    /*
     * if input is:
     * 10 256.875 T
     * i = 10 ,x = 256.8 c=7
     */
    printf("\ni=%d , x=%f, c=%c",i, x, c);
    return 0;

}
