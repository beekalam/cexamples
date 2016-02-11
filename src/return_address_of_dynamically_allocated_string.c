#include <stdio.h>
char *blanks(int number){
    char *spaces = (char*)malloc(number + 1);
    int i;
    for(i=0;i < number;++i){
        spaces[i] = ' ';
    }
    spaces[number]='\0';
    return spaces;
}
int main(int argc,char **argv){
    char *tmp=blanks(5);
    printf("%s",tmp);
    free(tmp);
    return 0;

}
