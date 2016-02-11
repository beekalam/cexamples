/*  display the bit pattern corresponding to a signed decimal integer */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv){
    int a, b, m, count, nbits;
    unsigned mask;
    /*  determine the word size in bits and set the initial mask */
    nbits = 8 * sizeof(int);
    m = 0x1 << (nbits - 1);        /*  place 1 in leftmost position */
        do{
            /*  read a signed intger */
            printf("\n\nEnter an integer value (0 to stop): ",a);
            scanf("%d",&a);

            /* output the bit pattern */
            mask = m;
            for( count = 1; count <= nbits; count++){
                b = (a & mask) ? 1 : 0;   /*  set display bit on or off */
                printf("%x", b);          /*  print display list */
                if (count % 4 == 0)
                    printf(" ");          /*  blank space after every 4th digit */
                mask >>= 1;               /*  shift mask 1 position to the right */
            }
        }while (a != 0);

    return 0;

}
