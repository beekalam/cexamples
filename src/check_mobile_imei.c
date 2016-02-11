#include <stdio.h>
/* 
Every mobile phone operating in GSM (2G) and WCDMA (3G) wireless networks
is characterized by a unique identifier of 15 digits, called IMEI (International Mobile
Equipment Identifier). A method to check if the device is really made by the official
manufacturer is to compare the IMEI’s last digit, called Luhn digit, with a check digit. If
it is equal, the device is most probably authentic. Otherwise, it isn’t authentic for sure.
The check digit is calculated as follows: first, we calculate the sum of the first IMEI’s
14 digits by adding
(a) The digits in the odd positions.
(b) The double of the digits in the even positions. But if a digit’s doubling is a
two-digit number, we add each digit separately. For example, suppose that the
value of the checked digit is 8. Its double is 16, therefore we add to the sum the
result of 1+6 = 7 and not 16.
If the last digit of the calculated sum is 0, that is, the check digit. If not, we subtract
the last digit from 10 and that is the check digit.
For example, let’s check the IMEI 357683036257378. The algorithm applied in the
first 14 digits produces
3 + (2×5) + 7 + (2×6) + 8 + (2×3) + 0 + (2×3) + 6 + (2×2) + 5 +
(2×7) + 3 + (2×7) =
3 + (10) + 7 + (12) + 8 + (6) + 0 + (6) + 6 + (4) + 5 + (14) + 3 +
(14) =
3 + (1+0) + 7 + (1+2) + 8 + (6) + 0 + (6) + 6 + (4) + 5 + (1+4) + 3
+ (1+4) = 62
The check digit is 10−2 = 8 equal to the Luhn digit. Therefore, this IMEI is valid.
Write a program that reads the IMEI of a mobile phone (15 digits) and checks if it is
authentic or not.

 * */
int main()
{
	char ch, chk_dig;
	int i, sum, temp;

	sum = 0;	
	printf("Enter IMEI (15 digits): ");
	for(i = 1; i < 15; i++) /* Read the first 14 IMEI’s digits. */
	{
		ch = getchar();
		if((i & 1) == 1) /* Check if the digit’s position is odd. */
			sum += ch-'0'; /* The expression ch-'0' calculates the numerical value of the digit character. */
		else 
		{
			temp = 2*(ch-'0');
			if(temp >= 10)
				temp = (temp/10) + (temp%10); /* If the digit’s doubling produces a two-digit number we calculate the sum of these digits. */
			sum += temp;
		}	
	}
	ch = getchar(); /* Read the IMEI’s last digit, that is the Luhn digit. */
	ch = ch-'0'; 

	chk_dig = sum % 10;
	if(chk_dig != 0)
		chk_dig = 10-chk_dig;

	if(ch == chk_dig)
		printf("*** Valid IMEI ***\n");
	else
		printf("*** Invalid IMEI ***\n");
	return 0;
}
