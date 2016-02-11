#include <stdio.h>
long int fibonacci(int count)
{
    static long int f1 = 1, f2 = 1;
    long int f;

    f = (count < 3) ? 1: f1 + f2;
    f2 = f1;
    f1 = f;
    return f;
}
int main(int argc,char **argv){
    int count, n;
    printf("How many Fibonacci numbers?");
    scanf("%d", &n);
    printf("\n");

    for(count = 1; count <= n; ++count)
        printf("\ni =%2d  F = %ld", count, fibonacci(count));
    return 0;

}
