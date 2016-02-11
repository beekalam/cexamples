#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void write_sample_data(void){
    FILE *fp =  fopen("test.dat","w");
    if(fp == NULL){
        printf("Error: could not write sample data\n");
        exit(1);
    }
    float i =-4;
    for( ; i <10; i+=0.5){
      fprintf(fp, " %f", i);
    }
    fclose(fp);
}
int main(int argc,char **argv){
    write_sample_data();
    FILE *fp;
    int ret;
    double temp;

    fp = fopen("test.dat", "r");
    if(fp == NULL)
    {
        printf("Error: File can't be loaded\n");
        exit(1);
    }
    while(1)
    {
        ret = fscanf(fp, "%lf", &temp); /*  since fscanf() reads one
       item , the return value 1 implies that the value was successfully read and
      assigned to temp. */
        if (ret != 1) /*  we could omit ret and write if(fscanf(fp, "%lf", &temp)!=1 */
            break;
        if(temp >= -5 && temp <= 5)
            printf("%f\n", temp);
    }
    fclose(fp);
    return 0;

}
