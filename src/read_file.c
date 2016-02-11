#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void create_sample_file(void){
    FILE* p= fopen("sample.dat","w+");
    if(p){
        fprintf(p,"line 1\n");
        fprintf(p,"line 2\n");
        fclose(p);
    }
}
int main(int argc,char **argv){
    create_sample_file();
    FILE *fpt;
    char c;
    if ((fpt = fopen("sample.dat", "r")) == NULL)
        printf("\nError - cannot open the designated file\n");
    else
        do
            putchar(c = getc(fpt));
        while (c !='\n');
    fclose(fpt);
    return 0;

}
