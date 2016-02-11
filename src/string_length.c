#include <stdio.h>
//we could have used
//size_t stringLength(char string[])
size_t stringLength(char* string){
    size_t length = 0;
    while(*(string++)){
        length++;
    }
    return length;
}
int main(int argc,char **argv){
    char simpleArray[] = "simple string";
    char *simplePtr =(char*)malloc(strlen("simple string") +1);
    strcpy(simplePtr,"simple string");

    printf("%d\n", stringLength(simplePtr));

    printf("%d\n",stringLength(simpleArray));
    //& is redundant and unnecessary
    printf("%d\n",stringLength(&simpleArray));
    //this works and its verbose
    printf("%d\n",stringLength(&simpleArray[0]));
    return 0;

}
