#include <stdio.h>
int linecount(void)
    /*  read a line of text and count the number of characters */
{
    char line[80];
    int count = 0;

    while((line[count] = getchar()) != '\n')
        ++count;
    return count;
}
int main(int argc,char **argv){
    int n;          /*  number of chars in given line */
    int count = 0;  /*  number of lines */
    int sum = 0;    /*  total number of characters */
    float avg;      /*  average number of chars per line */

    printf("Enter the text below\n");
    /*  read a line of text and update the cumulative counters */
    while ( (n = linecount()) > 0){
        sum += n;
        ++count;
    }

    avg = (float) sum/count;
    printf("\n Average number of characters per line: %5.2f \n", avg);
    return 0;
}
