#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * The strncpy() function is declared in string.h, like this:
char *strncpy(char *dest, const char *src, size_t count);
strncpy() is similar to strcpy(), with the difference that only the first count characters
of the string pointed to by src will be copied into dest.
If the value of count is less than or equal to the length of the string that src points to,
a null character won’t be appended to the memory pointed to by dest. If it is greater, null
characters are appended, up to the value of count.
 */
int main(int argc,char **argv){
    char str1[] = "Old text";
    char str2[] = "New";
    char str3[] = "Get";

    strncpy(str1, str2, 3);
    printf("%s\n", str1);

    strncpy(str1, str3, 5);
    printf("%s\n", str1);

    return 0;

}
