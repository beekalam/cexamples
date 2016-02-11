#include <stdio.h>
#include <ctype.h>
int main(int argc,char **argv){
    int lower, upper;

    lower = getchar();
    upper = toupper(lower);
    putchar(upper);

    printf("\n");
    return 0;

}
