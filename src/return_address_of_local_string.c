#include <stdio.h>
#define MAX_TAB_LENGTH 32
char* blanks(int number){
    //when the functions executes it will return
    //the string's address,but the memory area
    //will subsequently be overwritten by the next
    //function called.
    char spaces[MAX_TAB_LENGTH];
    //char *spaces = (char*)malloc(number);
    int i;
    for(i=0;i < number && i < MAX_TAB_LENGTH;++i){
        spaces[i] = ' ';
    }
    spaces[i]='\0';
    return spaces;
}
int main(int argc,char **argv){
    char *tmp= blanks(10);
    printf("%s",tmp);
    free(tmp);
    return 0;

}
