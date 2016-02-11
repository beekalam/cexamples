#include <stdio.h>
int main(int argc,char **argv){
    char line[80];

    scanf("%[^\n]",line);

    printf("\n%s \n", line);
    return 0;

}
