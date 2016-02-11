#include <stdio.h>

int main(int argc,char **argv){
    int* arr[5];
    int i=0;
    for(i=0;i < 5;++i){
        arr[i] = (int*)malloc(sizeof(int));
        *arr[i] = i;
    }
    return 0;
}
