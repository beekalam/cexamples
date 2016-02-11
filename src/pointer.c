#include <stdio.h>
int main(int argc,char **argv){
    int u = 3;
    int v;
    int *pu;  
    int *pv;

    pu = &u;
    v = *pu;
    pv = &v;

    printf("\nu=%d    &u=%X   pu=%X   *pu=%d", u, &u, pu, *pu);
    printf("\nv=%d    &v=%x   pv=%X   *pv=%d", v, &v, pv, *pv);

    printf("\n");
    return 0;

}
