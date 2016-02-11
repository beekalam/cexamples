#include <stdio.h>
//todo
void add(int size,double * restrict arr1,const double * restrict arr2){
    int i =0;
    for(i=0; i < size;++i){
        arr1[i] += arr2[i];
    }
}
int main(int argc,char **argv){
    //printf("%d\n", isPositive3(1234.0)); 
    return 0;

}
