#include <stdio.h>
#include <stdlib.h>
#include <string.h>
union sample
{
    char ch;
    int i;
    double d;
};

int main(int argc,char **argv){
    union sample s;

    s.ch = 'a';
    printf("%c %d %f\n", s.ch, s.i, s.d);

    s.i = 64;
    printf("%c %d %f\n", s.ch, s.i, s.d);

    s.d = 12.48;
    printf("%c %d %f\n", s.ch, s.i, s.d);
    return 0;

}
