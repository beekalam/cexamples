#include <stdio.h>
int main(int argc,char **argv){
    static int x[10] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    int i;

    for(i = 0; i <= 9; ++i){
        /* display an array element */
        printf("\ni = %d      x[i] = %d     *(x+i)= %d", i, x[i], *(x+i));

        /* display the corresponding array address */
        printf("\n           &x[i]= %X   x+i=%X", &x[i], (x+i));
    }

    printf("\n");
    return 0;

}
