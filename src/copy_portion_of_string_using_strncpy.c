#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char **argv){
    char *source_str = "this is the source string";
    char dest_str1[40]={0}, dest_str2[40]={0};
    strncpy(dest_str1,source_str, 11);
    printf("How about that! dest_str1 is now: %s\n",dest_str1);
    //use strncpy to copy only the last 13 characters
    strncpy(dest_str2, source_str + (strlen(source_str) - 13),13);
    printf("What dest_str2 is now: %s\n",dest_str2);

    return 0;

}
