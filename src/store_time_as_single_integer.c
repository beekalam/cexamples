#include <stdio.h>
typedef struct
{
    unsigned int Hour : 5;
    unsigned int Minute : 6;
}TimeType;
typedef union
{
    TimeType time;
    int Number;
}TimeConverter;
//convert time to a number, return zero when the values are out of range
int TimeToNumber(int Hour, int Minute){
    TimeConverter convert;
    if(Hour < 1 || Hour > 24 || Minute < 1 || Minute > 60)
        return 0;
    convert.time.Hour = Hour;
    convert.time.Minute = Minute;
    return convert.Number + 1;
}
//convert number back into the two time elements that compose it
void NumberToTime(int Number, int *Hour, int *Minute){
    TimeConverter convert;
    convert.Number = Number - 1;
    *Hour = convert.time.Hour;
    *Minute = convert.time.Minute;
}

int main(int argc,char **argv){
    int Number, Hour, Minute;
    Hour = 13;
    Minute = 13;
    Number = TimeToNumber(Hour, Minute);
    printf("Number:%d\n",Number);
    NumberToTime(Number, &Hour, &Minute);
    printf("The time after conversion is %d:%d\n", Hour, Minute);
    return 0;

}
