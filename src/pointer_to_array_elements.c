#include <stdio.h>
int main(int argc,char **argv){
    int *px, *py;    
    static int a[6] = { 1, 2, 3, 4, 5, 6};

    py = &a[0];
    px = &a[5];
    printf("px=%X   py=%X", px, py);
    printf("\npy - px=%X", py - px);

    printf("\n");
    return 0;

}
