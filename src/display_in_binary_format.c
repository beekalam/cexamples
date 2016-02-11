#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * Write a program that reads an integer in [0,255] continuously and displays it in
binary. For example, if the user enters 32, the program should display 00100000.
For any value out of [0,255] the program should terminate.
 */
int main(int argc,char **argv){
 int i, num;

      while(1)
      {
            printf("\nEnter number: ");
            scanf("%d", &num);

            if(num < 0 || num > 255)
                  break;

            for(i = 0; i < 8; i++) /* Check the value of each bit. */
            {
                  (num & 128) ? printf("1") : printf("0");
                  num <<= 1; /* Shift all bits one place left. */
            }
      }

    return 0;

}
