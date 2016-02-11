#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * The ## operator is used to merge identifiers together. If the identifier is a macro parameter,
the preprocessor first replaces it with the value of the argument and then pasting occurs.
*/
#define f(a) s##u##m##a
int sum1(int a, int b)
{
  return a + b;
}
int main(int argc,char **argv){
    int i,j;

    printf("Enter numbers: ");
    scanf("%d%d", &i, &j);
    printf("%d\n", f(1)(i, j));
    return 0;

}
