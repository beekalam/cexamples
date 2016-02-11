#include <stdio.h>
int main(int argc,char **argv){
    char c1,c2, c3;
    scanf("%c%c%c", &c1, &c2, &c3);
    printf("\n %c %c %c\n",c1, c2, c3);
    printf("\n-------------------\n");
    fflush(stdin);
    scanf(" %c %c %c", &c1, &c2, &c3);
    printf("\n %c %c %c\n",c1, c2, c3);
    
  
    return 0;

}
