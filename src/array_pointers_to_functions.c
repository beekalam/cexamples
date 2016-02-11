#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int test_1(int a, int b);
int test_2(int a, int b);
int test_3(int a, int b);

int main(int argc,char **argv){
    int (*ptr[3])(int a, int b);
    int i, j, k;

    ptr[0] = test_1;
    ptr[1] = test_2;
    ptr[2] = test_3; 

    printf("Enter numbers: ");
    scanf("%d%d", &i, &j);
    if( i > 0 && i < 10)
         k = ptr[0](i,j);
    else if(i >= 10 && i <20)
        k = ptr[1](i, j);
    else
        k = ptr[2](i, j);
    printf("Val = %d\n", k);
    return 0;

}
int test_1(int a, int b)
{
    return a + b;
}
int test_2(int a, int b)
{
    return a-b;
}
int test_3(int a, int b)
{
    return a *b;
}
