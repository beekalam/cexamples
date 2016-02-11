#include <stdio.h>
void transfer(int n, char from, char to, char temp)
{
    /*  transfer n disks from one pole to another */
    /* n  = number of disks
     * from = origin
     * to = destination
     * temp = temporary storage */
    if (n > 0){
        /*  move n-1 disks from origin to temporary */
        transfer(n-1, from, temp, to);

        /* move nth disk from origin to destination */
        printf("Move disk %d from %c to %c\n", n, from, to);

        /* move n-1 disks from temporary to destination */
        transfer(n-1, temp, to, from);
    }
    return;
}
int main(int argc,char **argv){
    int n;
    printf("Welcome to the TOWERS of HANOI \n\n");
    printf("How many disks?");
    scanf("%d", &n);
    printf("\n");
    transfer(n,'L', 'R','C');
    return 0;

}
