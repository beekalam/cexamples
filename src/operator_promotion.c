#include <stdio.h>
int main(int argc,char **argv){
    float f1 = 3 /4;
    float f2 = 3 / 4.0;
    printf("3 / 4== %g or %g depending on the type used.\n",
            f1,f2);
    return 0;

}
