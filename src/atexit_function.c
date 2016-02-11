#include <stdio.h>
#include <stdlib.h>
void print_message(void){
    printf("at exit message");
}
int main(int argc,char **argv){
    //can be used to perform "cleanup" 
    //opertions when your program terminates
    atexit(print_message);
    int i=0;
    while(++i < 100);
    return 0;

}
