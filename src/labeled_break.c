#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv){
	int i = 0;
	int j = 0;
	 for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (j == 3)
                goto Louter;
            if (j == 4)
                goto L2;
        }
        L2:
        ;
    }

Louter:
    ;


	printf("\npress any key to continue..");
	char c = getchar();
    return 0;
}
