#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv){
	FILE *fp;
	char str[100];
	
	fp = fopen("test.txt", "r");
	if( fp == NULL)
	{
		printf("Error: File can't be loaded\n");
		exit(1);
	}
	while(1)
	{
		if(fgets(str, sizeof(str), fp) != NULL)
			printf("%s", str);
		else
		{
			if(feof(fp))
				printf("End of file\n");
			else
				printf("Failed for another reason\n");
			break;
		}
	}
	fclose(fp);
    return 0;

}
