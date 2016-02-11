#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * 
 * C doesn't allow anonymous structs or unions, which means that dummy
 * tag names and dummy members are necessary:
 */
struct Foo
{
    int i;
    union Bar
    {
        struct Abc { int x; long y; } _abc;
        char *p;
    } _bar;
};

#define x _bar._abc.x
#define y _bar._abc.y
#define p _bar.p

int main(int argc,char **argv){

    struct Foo f;

    f.i = 12;
    f.x = 13;
    f.y = 14;
    f.p = 15;

    return 0;

}
