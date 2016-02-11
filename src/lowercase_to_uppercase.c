#include <stdio.h>
#include <ctype.h>
int main(int argc,char **argv){
    char letter[80];
    int count, tag;
    for(count =0; (letter[count]=getchar()) !='\n'; ++count)
        ;
    //tag the character count
    tag = count;
    /*  display the line in uppercase */
    for(count = 0; count < tag; ++count)
        putchar(toupper(letter[count]));

    printf("\n");
    return 0;

}
