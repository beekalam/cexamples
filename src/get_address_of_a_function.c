#include <stdio.h>
int dummy_func(void){
    return 10;
}
int main(int argc,char **argv){
    void* stack_var;
    void* func = (void*)dummy_func;
    printf("main is executing at %p\n",stack_var);
    printf("function address is at %p\n",&stack_var);
    return 0;

}
