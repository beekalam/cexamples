#include <stdio.h>
#include <stdlib.h>
int main(int argc,char **argv){
    float radius, area;

    printf("Radius =? ");
    scanf("%f",&radius);
    area = 3.1415 * radius * radius;
    printf("\nArea = %f\n",area);
    return 0;

}
