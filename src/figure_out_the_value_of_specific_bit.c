#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * Usually, applications that read data from the hardware are needed to figure out the
values of specific bits. For example, write a program that reads an integer and a bit
position and displays the value of the respective bit.
 */
int main(int argc,char **argv){
    unsigned int num, pos;

	printf("Enter number: ");
	scanf("%d", &num);

	printf("Enter bit position [1-32]: ");
	scanf("%d", &pos);
	if(pos >= 1 && pos <= 32) 
		printf("The value of bit%d is %d\n", pos, (num >> (pos-1)) & 1);
	else
		printf("Bit position should be in [1-32]\n");
    return 0;

}
