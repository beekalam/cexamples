#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * The main difference with strcmp() is that strcmp() stops comparing when it encounters
the null character in either string. memcmp(), on the other hand, stops comparing only
when size bytes are compared; it doesn’t look for the null character.
 */
int main(int argc,char **argv){
    char str1[] = {'a', 'b', 'c', '\0', 'd', 'e'};
    char str2[] = {'a', 'b', 'c', '\0', 'd', 'e'};
    
    if(strcmp(str1, str2) == 0)
        printf("Same Content\n");
    else
        printf("Different content\n");

    if( memcmp(str1, str2, sizeof(str1)) ==  0)
        printf("Same content\n");
    else
        printf("different content\n");
    return 0;

}
