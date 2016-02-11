#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv){
    int b;
    b = 20, b = b + 30, printf("num = %d\n", b);
    return 0;

}
/*
 * exp1, exp2, exp3,…
The comma operator means "evaluate the expression exp1 first, then evaluate exp2, then
exp3, through the last expression." Since the comma operator is left associative, the expressions are sequentially evaluated from left to right. The result of the entire expression is the
result of the last expression evaluated
 */
