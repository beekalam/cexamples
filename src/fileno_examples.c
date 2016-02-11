#include <stdio.h>
int main(int argc,char **argv){
    //int fileno(FILE* stream);
    printf("%d\n",fileno(stdin));
    printf("%d\n",fileno(stdout));
    printf("%d\n",fileno(stderr));
    FILE* fp=fopen("f1.txt","w");
    printf("%d\n",fileno(fp));
    return 0;

}
