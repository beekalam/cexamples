#include <stdio.h>
#include <assert.h>
int main(int argc,char **argv){
    int *pi = NULL;
    pi = (int*) malloc(sizeof(int));
    assert(pi != NULL);

    return 0;

}
