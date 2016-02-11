#include <stdio.h>
#include <stdlib.h>
int main(int argc,char **argv){
    char* env_string;
    env_string = getenv("PATH");
    if(env_string == (char*)NULL)
        printf("\n you have no path\n");
    else
        printf("\n your path is : %s\n",env_string);

    printf("The windows directory is %s\n",getenv("windir"));
    return 0;

}
