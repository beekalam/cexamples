#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv){
    int month, day, year;
    unsigned long result;
    printf("Enter month, day, year:\n");
    fflush(stdout);
    scanf(" %d %d %d", &month, &day, &year);
    //make all of the ranges begin at zero
    --month;
    --day;
    year -=1975;
    //make sure all of the date elements are in proper range 
    if(
            ( year < 0 || year > 127) ||
            (month < 0 || month > 11) ||
            (day < 0 || day > 31)
      )
    {
        printf("You entered an improper date!\n");
        exit(1);
    }
    
    result = year;
    result |= month << 12;
    result |= day << 14;
    printf("The result is: %ul.\n", result);
    return 0;

}
