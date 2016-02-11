#include <stdio.h>
#include <string.h>
//todo:why the error
char *rtrim(char* str){
    //start at character before NUL
    int n = strlen(str) - 1;
    while(n>0){
        if (*(str+n) != ' ')
        {
            *(str+n+1)='\0';
            break;
        }
        else
            n--;
    }
    return str;
}
int main(int argc,char **argv){
    char *trail_str = "This string has trailing spaces int it        ";
    printf("Before calling rtrim(), trail_str is %d\n",strlen(trail_str));
    rtrim(trail_str);
    printf("after calling rtrim(),trail_str is %d\n",strlen(trail_str));
    return 0;

}
