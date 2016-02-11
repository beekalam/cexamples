#include <stdio.h>
const float first = 0.0;
const float last = 70.0;
const float small = 0.007;
int main(int argc,char **argv){
    float f;
    //rounding errors and small differences in the
    //representation of  the variable small might
    //cause f never be equal to last.Thus,the loop
    //would go past the value last.
    //the inequality f < last + 1.0 has been added 
    //to prevent the program from running on for a 
    //long time if this happens
    //if you run this program and the value is 71 or
    //more,this is what happened.
    for(f = first; f != last && f < last + 1.0; f+=small)
        ;
    printf("f is now %g\n",f);
    return 0;

}
