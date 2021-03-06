#include <stdio.h>
/*
 * For a complex number z, we have z = a + bj, where j is the imaginary unit, a
is the real part, and b is the imaginary part, respectively. Define the structure type
complex with fields the float numbers re and im, which represent the real and
imaginary parts of a complex number.
Write a function that takes as parameters two structures of type complex and a
character, which represents the sign of a math operation. The function should perform the math operation and return the result as a structure of type complex. Write
a program that uses the structure complex to read two complex numbers and a
math sign (+, −, *,/) and uses the function to display the result of the math
operation.
Remind that, if z1 = a + bj and z2 = c + dj, we have

 */

struct complex operation(struct complex a1, struct complex a2, char sign); 

struct complex
{
	double re; /* The real part of the complex number. */
	double im; /* The imaginary part of the complex number. */
};

int main()
{
	char sign;
	struct complex z1, z2, z;
	
	printf("Enter real and imaginary part of the first complex number: ");
	scanf("%lf%lf", &z1.re, &z1.im);
	printf("z1 = %f%+fj\n", z1.re, z1.im);

	printf("Enter real and imaginary part of the second complex number: ");
	scanf("%lf%lf", &z2.re, &z2.im);
	printf("z2 = %f%+fj\n", z2.re, z2.im);

	printf("Enter sign (+, -, *, /): ");
	scanf(" %c", &sign); /* We add a space before %c, in order to bypass the new line character stored in stdin with the previous insertion. */
	if(sign == '+' || sign == '-' || sign == '*' || sign == '/')
	{
		if(sign == '/' && z2.re == 0 && z2.im == 0)
			printf("Division with zero is not allowed\n");
		else
		{
			z = operation(z1, z2, sign);
			printf("z = z1 %c z2 = %f%+fj\n", sign, z.re, z.im);
		}
	}
	else
		printf("Wrong sign\n");
	return 0;
}

struct complex operation(struct complex a1, struct complex a2, char sign)
{
	struct complex a;

	switch(sign)
	{
		case '+':
			a.re = a1.re + a2.re;
			a.im = a1.im + a2.im;
		break;

		case '-':
			a.re = a1.re - a2.re;
			a.im = a1.im - a2.im;
		break;

		case '*':
			a.re = (a1.re*a2.re) - (a1.im*a2.im); 
			a.im = (a1.im*a2.re) + (a1.re*a2.im);
		break;

		case '/':
			a.re = ((a1.re*a2.re) + (a1.im*a2.im))/ ((a2.re*a2.re)+(a2.im*a2.im));
			a.im = ((a1.im*a2.re) - (a1.re*a2.im))/ ((a2.re*a2.re)+(a2.im*a2.im));
		break;
	}
	return a;
}
