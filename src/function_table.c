#include <stdio.h>
#include <stdlib.h>
void func0(){
    puts("inside function 0");
}
void func1(){
    puts("inside function 1");
}
void(*funcTable[2])(void)={func0,func1};

int main(int argc, char **argv){
    int i = 0;

    for(i=0;i < 2;++i)
        funcTable[i]();

    return 0;

}
