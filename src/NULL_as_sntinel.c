#include <stdio.h>
#include <assert.h>
// it does not use argc instead,
// it takes advantage of the fact that the last
// value in argv is a null pointer
int main(int argc,char **argv){
    int i=1;
    printf("program name= \"%s\"\n", argv[0]);
    for(i=1; argv[i] != NULL; ++i)
        printf("argv[%d]=\" %s\"\n",i, argv[i]);

    return 0;

}
