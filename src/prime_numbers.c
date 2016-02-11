#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * Write a program that reads an integer and displays the prime numbers that are less
than or equal to it.
 */
int main(int argc,char **argv){
    int i, j, num;
	
	printf("Enter number: ");
	scanf("%d", &num);

	for(i = 2; i <= num; i++)
	{
		for(j = 2; j <= i; j++) 
		{
			if(i%j == 0)
			{
				if(i == j)
					printf("Prime number = %d\n", i);
				else
					break;
			}
		}
	}
    return 0;

}
