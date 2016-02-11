#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv){
    int i, k, arr[2][3];

    for(i = 0; i <2; ++i)
        for(k = 0; k < 3; k++)
            printf("Address of [%d][%d] element is : %p\n", i, k, &arr[i][k]);
    return 0;

}
