#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
While C defines struct assignment in a simple, convenient manner: 
struct A x, y;
...
x = y;
it does not for struct comparisons. Hence, to compare two struct instances for equality: 
#include <string.h>

struct A x, y;
...
if (memcmp(&x, &y, sizeof(struct A)) == 0)
    ...
Note the obtuseness of this, coupled with the lack of any kind of help from the language with type checking.

There's a nasty bug lurking in the memcmp(). The layout of a struct, due to alignment, can have 'holes' in it. C does not guarantee those holes are assigned any values, and so two different struct instances can have the same value for each member, but compare different because the holes contain different garbage.

 * 
 */
struct A{
    int a;
    int b;
    int c;
};

int main(int argc,char **argv){

    struct A x, y;
    x.a = x.b = x.c = y.a = y.b = y.c = 1;

    if(memcmp(&x, &y, sizeof(struct A)) == 0)
        printf("\n structs are equal\n");




    return 0;

}
