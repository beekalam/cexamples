#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void dostring(char *s)
{
    enum Strings { Hello, Goodbye, Maybe, Max };
    static char *table[] = { "hello", "goodbye", "maybe"};
    int i;

    for (i = 0; i < Max; i++) {
        if (strcmp(s, table[i]) == 0)
            break;
    }

    switch(i)
    {
    case Hello:
      printf("\n hello" );
      break;
    case Goodbye:
      printf("\nGoodbye");
      break;
    case Maybe:
      printf("\nMaybe");
      break;
    default:
      printf("\nno string was found");
      break;
    }
}
int main(int argc,char **argv){
    dostring("hello");
    dostring("goodbye");

    char ch = getchar();
    return 0;

}
