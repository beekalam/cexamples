#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void write_sample_data(void){
    FILE *fp =  fopen("test.txt","w");
    if(fp == NULL){
        printf("Error: could not write sample data\n");
        exit(1);
    }
    fprintf(fp, "test1");
    fprintf(fp, " 1");
    fprintf(fp, " 1.5");

    fprintf(fp, "test2");
    fprintf(fp, " 1");
    fprintf(fp, " 1.5");
    fprintf(fp, " 2.5");
    fclose(fp);
}
int main(int argc,char **argv){
    write_sample_data();
    FILE *fp;
    char str[100];
    int i;
    double d;

    fp = fopen("test.txt", "r");
    if( fp == NULL){
        printf("Error:File can't be loaded\n");
        exit(1);
    }
    while(1)
    {
        if(fscanf(fp, "%s%d%lf", str, &i, &d) != 3)
            break;
        printf("%s %d %f\n", str, i, d);

    }
    fclose(fp);

    return 0;

}
