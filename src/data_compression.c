/*  store student's names and birthdates within an array, using bit fields
 *  for the birthdates.
 *
 *  when finished , display each student's name and birthdate.
 *  display each birthdate as follows: day_of_week, month, day, year */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int convert(int  mm, int dd, int yy);     /*  function prototype */
int main(int argc,char **argv){
    int mm, dd, yy, count = 0;
    int day_of_week;    /*  day of week ( 0 -> sunday, 1 -> monday, etc.) */

    typedef struct {
        unsigned month : 4;
        unsigned day   : 5;
        unsigned year  : 7;
    }date;
    struct {
        char name[30];
        date birthdate;
    }student[40];

    static char *weekday[] = {"Sunday", "Monday", "Tuesday", "Wednesday",
                                "Thursday", "Friday", "Saturday"};
    static char *month[] = {"January", "February", "March", "April",
                            "May", "August", "September", "October",
                            "November", "December"};
    /* opening message */
    printf("Data Entry Routine\n Type \'END\' when finished\n");
    printf("\nName: ");
    scanf(" %[^\n]", student[count].name);
    /* enter data for all students */
    while (strcmp(student[count].name, "END") != 0) {
        printf("Birthdate (mm dd yyyy): ");
        scanf("%d %d %d", &mm, &dd, &yy);
        /* assign integer input data to bit fields */
        student[count].birthdate.month = mm;
        student[count].birthdate.day = dd;
        student[count].birthdate.year = yy - 1900;
        printf("\nName: ");
        scanf(" %[^\n]", student[++count].name);
    }
    /*  convert birthdates and display output for all students */
    count = 0;
    while (strcmp(student[count].name , "END") != 0) {
        day_of_week = convert(student[count].birthdate.month,
                              student[count].birthdate.day,
                              student[count].birthdate.year);
        printf("\n%s      ", student[count].name);
        printf("%s %s %d, %d\n", weekday[day_of_week],
                                 month[student[count].birthdate.month-1],
                                 student[count].birthdate.day,
                                 student[count].birthdate.year + 1900);
        ++count;
    }
    return 0;
}
int convert(int mm, int dd, int yy) /*  convert date to numerical day of week */
{
    long ndays;   /*  number of days from start of 1900 */
    long ncycles;  /*  number of 4-year cycles beyond 1900 */
    int  nyears;   /*  number of years beyond last 4-year cycle */
    int  day;      /*  day of week (0, 1, ... , 6) */
    /*  numerical conversions */
    ndays = (long) (30.42 * (mm - 1)) + dd; /*  approximate day of year */
    if (mm == 2) ++ndays;                    /*  adjust for February */
    if ((mm > 2) && (mm < 8)) --ndays;       /*  adjust for March - July */
    if ((yy % 4 == 0) && (mm > 2)) ++ndays;  /*  adjust for leap year */

    ncycles = yy / 4;                       /*  4-year cycles beyond 1900 */
    ndays   += ncycles * 1461;              /*  add days for 4-year cycles */

    nyears = yy % 4;                        /* years beyond 4-year cycle */
    if (nyears > 0)
        ndays += 365 * nyears + 1;
    if (ndays > 59)  --ndays;               /*  adjust for 1900(NOT a leap year) */
    day = ndays % 7;
    return day;
}
