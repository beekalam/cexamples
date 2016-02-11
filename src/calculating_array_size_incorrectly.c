#include <stdio.h>
#define NUL '\0'
void replace(char buffer[],char replacement,size_t size){
    size_t count = 0;
    while(*buffer != NUL && count++ < size){
        *buffer = replacement;
        buffer++;
    }
}

int main(int argc,char **argv){
    char name[8];
    strcpy(name,"Alexander"); //strcpy permitted buffer overflow
    printf("%s\n",name);
    replace(name,'+',sizeof(name));  //does not permit buffer overflow
    printf("%s\n",name);
    return 0;

}
