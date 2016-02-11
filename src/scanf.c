#include <stdio.h>
int main(int argc,char **argv){
    char item[20];
    int partno;
    float cost;
    scanf("%s %d %f",item ,&partno, &cost);

    printf("\n %s \n %d \n %f",item,partno, cost);
    return 0;

}
