#include <stdio.h>
int main(int argc,char **argv){
    short ix,iy;
    long lx,ly;
    double dx,dy;

    scanf("%hd",&ix);  //read a short decimal integer
    scanf("%ld",&lx);   //read a long decimal integer
    scanf("%lf",&dx);  // read double precision variable

    //ho raads a short octal
    //lx reads long hexadecimal
    //le reads a double precision number
    scanf("%3ho %7lx %15le", &iy, &ly, &dy);
    return 0;

}
