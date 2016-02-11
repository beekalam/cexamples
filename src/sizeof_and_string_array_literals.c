#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv){
    char s1[8] = {'T', 'e', 'x', 't', '\0'};
    char s2[] = {'T', 'e', 'x', 't', '\0'};
    char s3[] = "Text";
    char *s4 = "Text";

    printf("s1 = %s, sizeof s1 = %d\n", s1, sizeof s1);
    printf("s2 = %s, sizeof s2 = %d\n", s2, sizeof s2);
    printf("s3 = %s, sizeof s3 = %d\n", s3, sizeof s3);
    printf("s4 = %s, sizeof s4 = %d\n", s4, sizeof s4);
    return 0;

}
