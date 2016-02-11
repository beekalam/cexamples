#include <stdio.h>
int main(int argc,char **argv){
    char name[20];
    float score1, score2, score3, avg;

    printf("please enter your name: ");
    scanf(" %[^\n]", name);

    printf("Please enter the first score: ");
    scanf("%f", &score1);

    printf("Please enter the second score: ");
    scanf("%f", &score2);

    printf("Please enter the third score: ");
    scanf("%f", &score3);
    avg = (score1 + score2 + score3)/3;

    printf("\n\nName: %-s\n\n", name);
    printf("Score 1: %-5.1f\n", score1);
    printf("score 2: %-5.1f\n", score2);
    printf("score 3: %-5.1f\n\n", score3);
    printf("Average: %-5.1f\n\n", avg);
    return 0;

}
