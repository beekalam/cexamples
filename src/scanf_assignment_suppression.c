#include <stdio.h>
int main(int argc,char **argv){
    char item[20];
    int partno;
    float cost;

    scanf(" %s %*d %f", item, &partno, &cost);
    /* 
     * for input
     * fastener 12345 0.05
     * then f a s t e n e r will be assigned to item and 0.05 will be assigned
     * to cost. However 12345 will not be assigned to
     * partno because of the asterisk, which is interpreted as an assignment suppression character.
     * */
    return 0;

}
