#include <stdio.h>
int main(int argc,char **argv){

    char line[80];
    /* write uppercase letters only */

    scanf(" %[ ABCDEFGHIJKLMNOPQRSTUVWXYZ]", line);

    printf("\n %s\n", line);
    return 0;

}
