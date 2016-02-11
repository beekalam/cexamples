#include <stdio.h>
#include <stdlib.h>
int copy(FILE *f1, FILE *f2){
    int c;
    c = getc(f1);
    while (c!= EOF){
        fputc(c,f2);
        c = getc(f1);
    }
    return(1);
}
int main(int argc,char **argv){
    FILE* f=fopen("f1.txt","wt");
    fprintf(f,"line 1");
    fprintf(f,"line 2");
    close(f);

    FILE* f2=fopen("f2.txt","wt");
    FILE* f1 = fopen("f1.txt","rt");
    copy(f1,f2);
    close(f1);
    close(f2);
    return 0;

}
