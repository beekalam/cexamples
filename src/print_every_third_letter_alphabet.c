#include <stdio.h>
int main(int argc,char **argv){
    int x = 0;
    for(x=1; x <= 26; ++x)
        if((x%3) == 0)
            printf("%c\n",x+64);
    return 0;

}
