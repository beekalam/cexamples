/*  convert a numerical date (mm dd yyyy) into "day of week, month, day, year"
 *  (e.g 5 24 1997 -> Saturday, May 24, 1997 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void readinput(int *pm, int *pd, int *py)
{
    printf("\n\nEnter mm dd yyyy: ");
    scanf("%d %d %d", pm, pd, py);
    return;
}

int convert(int mm, int dd, int yy)
{

    long ndays;   /*  number of days from start to 1900 */
    long ncycles; /*  number of 4-year cycles beyond 1900 */
    int   nyears;  /* number of years beyond last 4-year cycle */
    int day;       /*  day of week (0, 1, 2 ,3 ,4 ,5 or 6) */

    /*  numerical conversions */
    yy -= 1900;
    ndays = (long) (30.42 * (mm - 1)) + dd;    /*  approximate day of year */

    if (mm == 2) ++ndays;                      /*  adjust for February */
    if ((mm > 2) && (mm < 8)) --ndays;         /*  adjust for March - July */
    if ((yy % 4 == 0) && (mm > 2)) ++ndays;    /*  adjust for leap year */

    ncycles  = yy / 4;                          /*  4-year cycles beyond 1900 */
    ndays += ncycles * 1461;                   /*  add days for 4-year cycles */

    nyears = yy % 4;                           /*  years beyond 4-year cycle */
    if ( nyears > 0)                           /*  add days for yrs beyond last
                                                    year cycle */
        ndays += 365  * nyears + 1;

    if ( ndays > 59) --ndays;                  /*  adjust for 1900 (NOT a leap
                                                    year) */
    day = ndays % 7;
    return (day);
}

int main(int argc,char **argv){
  int mm, dd, yy;
  int day_of_week; /*  day of week ( 0 -> sunday,
                                     1 -> Monday, */  
  static char *weekday[] = {"Sunday", "Monday", "Tuesday", "Wednesday",
                            "Thursday", "Friday", "Saturday" };
  static char *month[] = { "January", "February", "March", "April",
                           "May", "June", "July","August", "September",
                           "October", "November", "December"};
  /*  opening message */
  printf("Date conversion routine\n To STOP, enter 0 0 0");
  
  readinput(&mm, &dd, &yy);

  /*  convert date to numerical day of week */
  while ( mm > 0){
      day_of_week = convert(mm, dd, yy);
      printf("\n %s, %s %d, %d", weekday[day_of_week], month[mm-1], dd, yy);
      readinput(&mm, &dd, &yy);
  }

    return 0;

}
