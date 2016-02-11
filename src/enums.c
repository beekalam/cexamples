#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv){
    int next_seas;
    enum Seasons {AUTUMN = 1, WINTER, SPRING, SUMMER} s;
    printf("Enter season[1-4]: ");
    scanf("%d", &s);

    if (s == SUMMER)
        next_seas = AUTUMN;
    else
        next_seas = s + 1;
    printf("Next season = %d\n", next_seas);
    return 0;

}
