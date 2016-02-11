#include <stdio.h>

/*
 * Write a function that calculates the maximum common divisor (MCD) of two
positive integers, according to the following Euclid’s algorithm: suppose we have
the integers a and b, with a > b. If b divides a precisely, then this is the MCD.
If the remainder r of the division a/b isn’t 0, then we divide b with r. If the new
remainder of the division is 0, then the MCD is r, otherwise this procedure is
repeated. Write a program that reads two positive integers and uses the function to
calculate their MCD.
 */
int mcd(int a, int b);

int main()
{
	int num1, num2;

	do
	{
		printf("Enter the first number: ");
		scanf("%d", &num1);

		printf("Enter the second number (equal or less than the first one): ");
		scanf("%d", &num2);
	} while((num2 > num1) || (num1 <= 0) || (num2 <= 0));

	printf("MCD of %d and %d is %d\n", num1, num2, mcd(num1, num2));
	return 0;
}

int mcd(int a, int b)
{
	int r;

	while(1)
	{
		r = a%b;
		if(r == 0)
			return b;
		else /* According to the algorithm we should divide b with r, so we change the values of a and b, respectively. */
		{
			a = b;
			b = r;
		}
	}
}
