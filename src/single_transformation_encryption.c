#include <stdio.h>
#include <string.h>

/* 
 * A simple algorithm to encrypt data is the algorithm of the single transformation.
Let’s see how it works. In one line, we write the letters of the used alphabet. In a
second line, we write the same letters in a different order. That second line is called
the cryptography key. For example, have a look at Figure 10.3.
Each letter of the original text is substituted with the respective key letter. For
example, based on Figure 10.3, if the user enters "test", the encrypted text is "binb".
Write a program that reads a string up to 100 characters, the key string up to
26 characters, and encrypts the lowercase characters of the input string. Then, the
encrypted string should be decrypted and the program should display the original
string. Notice that the key characters must appear only once.
 * */
#define LETTERS 26

int main()
{
	char str[100], key[LETTERS];
	int i, j, len, found;

	printf("Enter original text: ");
	gets(str);

	do
	{
		printf("Enter key (%d different characters): ", LETTERS);
		gets(key);

		found = 0;
		for(i = 0; i < LETTERS; i++)
		{
			for(j=i+1; j < LETTERS; j++)
			{
				if(key[i] == key[j])
				{
					found = 1;
					printf("Key characters should be different\n");
					break;
				}
			}
			if(found == 1)
				break;
		}
	}
	while(found != 0);

	len = strlen(str);
	for(i = 0; i < len; i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] = key[str[i]-'a'];
	}
	printf("Encrypted text: %s\n", str);
	for(i = 0; i < len; i++)
	{
		for(j = 0; j < LETTERS; j++)
		{
			if(str[i] == key[j])
			{
				str[i] = 'a'+j;
				break;
			}
		}
	}
	printf("Original text: %s\n", str);
	return 0;
}
