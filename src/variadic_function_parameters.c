#include    <stdio.h>
#include    <stdlib.h>
#include    <string.h>
#include    <stdarg.h>

int sum(int dim, ... )
{
    int       i;
    int       s = 0;
    va_list   ap;

    va_start(ap, dim);
    for (i = 0;i < dim; ++i)
        s += va_arg(ap, int);
    va_end(ap);

    return s;
}

int product(int dim, ... )
{
    int       i;
    int       s = 1;
    va_list   ap;

    va_start(ap, dim);
    for(i = 0;i < dim; ++i)
        s *= va_arg(ap, int);
    va_end(ap);

    return s;
}

int main(int argc,char **argv){

    int i;
    
    i = sum(3, 8, 7, 6);
    printf("sum= %d\n", i);

    i = product(5, 4, 3, 2, 1);
    printf("product:%d\n", i);

    return 0;

}
