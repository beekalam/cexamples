#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void test(int a);
int main(int argc,char **argv){
    void (*ptr)(int a);
    int i = 10;
    ptr = test;
    (*ptr)(10);

    return 0;

}
void test(a)
{
    printf("Val = %d\n", 2 * a);
}
