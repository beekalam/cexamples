#include <stdio.h>
#define PI 3.1415
float process(float radius);
int main(int argc,char **argv){
     float radius, area;
     printf("To STOP, enter 0 for the radius\n");
     printf("\nRadius=?");
     scanf("%f", &radius);
     while(radius != 0){
         if (radius <  0)
             area = 0;
         else
             area = process(radius);
         printf("Area=%f\n",area);
         printf("\nRadius=?");
         scanf("%f",&radius);
     }
    return 0;

}
float process(float r)
{
    float a;
    a = PI * r * r;
    return (a);
}
