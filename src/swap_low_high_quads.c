#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * Write a program that reads an integer in [0,255], then it swaps the two
 * quads of its
binary digits and displays the new number. For example, if the user inserts the
number 10 (binary 00001010), then the program should display the number 160
(binary 10100000).
 */
int main(int argc,char **argv){
    	unsigned int num, temp;

	printf("Enter number [0-255]: ");
	scanf("%d", &num);

	if(num >= 0 && num <= 255)
	{
		temp = num & 0xF; /* The value of the four low bits is stored in temp. 0xF is coded as 00001111 in binary. */
		temp <<= 4; /* Shift temp by four places to the left.  */
		temp += num >> 4; /* Add to temp the value of num shifted by four places to the right. */
		printf("Num_1 = %d  Num_2 = %d\n", num, temp);
	}
	else
		printf("Number should be in [0-255]\n");
    return 0;

}
