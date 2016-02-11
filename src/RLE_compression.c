#include <stdio.h>
#include <string.h>
/*
 * The data compression algorithm RLE (Run Length Encoding) is based on the fact
that a symbol within the data stream may be repeated many times in a row. This
repetitive sequence can be replaced by
(a) An integer that declares the number of the repetitions
(b) The symbol itself
Write a program that reads a string of up to 100 characters and uses the RLE algorithm to compress it. Don’t compress digits and characters that appear once.
For example, the string fffmmmm1234jjjjjjjjjjx
should be compressed to 3f4m123410jx
 */
int main()
{
	char str[100];
	int i, cnt;
	
	printf("Original text  : ");
	gets(str);

	printf("Compressed text: ");
	i = 0;
	while(i < strlen(str))
	{
		cnt = 1;
		if(str[i] < '0' || str[i] > '9') /* Digits are not compressed. */
		{
			while(str[i+cnt] == str[i]) /* Check if the current character, that is str[i], is repeated in the next places. */
				cnt++;

			if(cnt == 1)
				printf("%c", str[i]);
			else
				printf("%d%c", cnt, str[i]);
		}
		else
			printf("%c", str[i]);

		i += cnt;
	}
	return 0;
}
