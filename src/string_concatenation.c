#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(int argc,char **argv){
    char *s1 = "string1";
    char *s2 = "string2";
    char *s;

    //concatenate s1 and s2, and put result in s
    //free(s);
    s = (char *)malloc( (s1 ? strlen(s1) : 0) +
                        (s2 ? strlen(s2) : 0) + 1);

    if (!s)
        perror("out of memory");

    if (s1)
      strcpy(s, s1);
    else
        *s = 0;

    if (s2)
        strcpy(s + strlen(s), s2);
    
    printf("\n s:%s\n", s);

    //Append "hello" to s
    char  hello[] = "hello";
    char *news;
    size_t lens = s ? strlen(s) : 0;
    news = (char *)
            realloc(s, (lens + sizeof(hello) + 1) * sizeof(char));

    if (!news)
        perror("out of memory");

    printf("\n news: %s", news);

    s = news;
    memcpy(s + lens, hello, sizeof(hello));

    printf("\n s: %s\n" , s);

    
    return 0;

}
