#include <stdio.h>
#define sort(x) sortfunction ## x
void sortfunction1(){
    printf("in sort function 1");
}
void sortfunction2(){
    printf("in sort function 2");
}
void sortfunction3(){
    printf("in sort function 3");
}
int main(int argc,char **argv){
    sort(3)();
    return 0;

}
