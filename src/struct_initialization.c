#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct S { int a; int b; };
struct S x = { 5, 3 };
/*  
Members are initialized by their position within the { }s: 
This isn't much of a problem with small structs, but when there are
numerous members, it becomes tedious to get the initializers carefully
lined up with the field declarations. Then, if members are added or
rearranged, all the initializations have to be found and modified
appropriately. This is a minefield for bugs. 
*/

int main(int argc,char **argv){
    return 0;

}
