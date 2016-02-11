#include <stdio.h>
typedef struct _name{
    char firstName[25];
    char lastName[25];
}NAME;

int main(int argc,char **argv){
    //todo:doesn't work don't know why
    NAME myName{"mohammad","mansouri"};
    NAME yourName;

    myName.lastName="man";
    yourName = myName;
    printf("firstName:%s, lastName:%s",yourName.firstName, yourName.lastName);
    memcpy(yourName,myName,sizeof(yourName))
    return 0;

}
