#include <stdio.h>

int main(int argc,char **argv){
    // begin local block for  function main
    int test_var = 10;
    printf("Test variable  before if:%d\n",test_var);
    if(test_var > 5){
        //begin local block for "if" statement
        int test_var = 5;
        printf("Test variable within the if statement:%d\n",test_var);
        {
            //begin independent local block
            int test_var = 0;
            printf("Test variable within independent local block:%d\n",test_var);
        } //end of independent local block
    }
    printf("Test variable after if statement:%d\n",test_var)

    return 0;

}
