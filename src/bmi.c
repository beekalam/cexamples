#include <stdio.h>
/*
 * Write a program that reads a man’s height and weight and calculates his body mass
index (bmi) using the formula bmi = weight/height2. The program should display
the bmi and a corresponding message, according to Table 5.1.
Weight Categories
Mass Index Result
BMI < 20 Lower than normal weight
20 <= BMI <= 25 Normal weight
25 < BMI <= 30 Overweight
30 < BMI <= 40 Obese
40 < BMI Extremely obese
 */
int main()
{
	float bmi, height, weight;
	
	printf("Enter height (in meters): ");
	scanf("%f", &height);

	printf("Enter weight (in kgrs): ");
	scanf("%f", &weight);

	bmi = weight/(height*height);
	printf("BMI: %.2f\n", bmi);

	if(bmi < 20)
		printf("Under normal weight\n");
	else if(bmi <= 25) /* Since the previous if checks values up to 20, this else-if statement is equivalent to: else if(bmi >= 20 && bmi <= 25). */
		printf("Normal weight\n");
	else if(bmi <= 30)
		printf("Overweight\n");
	else if(bmi <= 40)
		printf("Obese\n");
	else 
		printf("Serious obesity\n");

	printf("According to your height the bounds of normal weight are [%.2f-%.2f]\n", 20*height*height, 25*height*height); /* The lower and the upper limit of BMI for a normal weight man are 20 and 25, respectively. */
	return 0;
}
