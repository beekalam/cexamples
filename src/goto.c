#include <stdio.h>
void bad_programmers_function(void){
    int x;
    printf("Execuse me while I count to 5000...\n");
    x=1;
    while(1){
        printf("%d\n",x);
        if(x == 5000)
            goto all_done;
        else
            x = x+1;
    }
all_done:
    printf("Whew! That wasn't so boad, was it?\n");
}
int main(int argc,char **argv){
    bad_programmers_function();
    return 0;

}
