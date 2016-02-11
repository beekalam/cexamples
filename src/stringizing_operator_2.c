#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define f(s) printf("%s = %s\n", #s, s);
int main(int argc,char **argv){
    char *str = "text";
    f(str);
    return 0;

}
