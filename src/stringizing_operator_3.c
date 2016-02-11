#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define sum(a, b) printf(#a "+" #b " = %d\n", a+b)
int main(int argc,char **argv){
    int i, j;
    printf("Enter numbers: ");
    scanf("%d%d", &i , &j);
    sum(i, j);
    sum(i *j, i*j);
    return 0;

}
