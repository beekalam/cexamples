#include <stdio.h>

int main(int argc,char **argv){
    char name[32]="firstname";
    int userID=1234;
    char *securityQuestion="abcd";

    memset(name,0,sizeof(name));
    userID = 0;
    printf("%d\n",strlen(securityQuestion));
    //todo
    //memset(securityQuestion, 0,strlen(securityQuestion));
    return 0;

}
