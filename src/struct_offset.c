#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

struct Foo { int x; int  y; };

int main(int argc,char **argv){
    
    int  y_offset = offsetof(struct Foo, y);
    int  x_offset = offsetof(struct Foo, x);

    printf("x_offset: %d\n", x_offset);
    printf("y_offset: %d\n", y_offset);

    return 0;

}
