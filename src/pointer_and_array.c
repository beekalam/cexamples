#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv){
    int i, arr[5] ={10, 20, 30, 40, 50};
    printf("**** Using array index ****\n");
    for(i = 0; i < 5; ++i)
        printf("Addr = %p Val = %d\n",&arr[i], arr[i]);
    printf("\n**** Using pointer arithmetic ****\n");
    for( i = 0; i < 5; i++)
        printf("Addr = %p Val = %d\n",arr + i, *(arr+i));
    return 0;

}
