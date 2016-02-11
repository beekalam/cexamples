#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//struct tm *gmtime(const time_t timeval);
/* 
int tm_sec Seconds, 0-61
int tm_min Minutes, 0-59
int tm_hour Hours, 0-23
int tm_mday Day in the month, 1-31
int tm_mon Month in the year, 0-11 (January = 0)
int tm_year Years since 1900
int tm_wday Day in the week, 0-6 (Sunday = 0)
int tm_yday Day in the year, 0-365
int tm_isdst Daylight savings in effect
 * */
int main(int argc,char **argv){
    struct tm *tm_ptr;
    time_t the_time;
    (void) time(&the_time);
    tm_ptr = gmtime(&the_time);

    printf("Raw time is %ld\n", the_time);
    printf("gmtime gives:\n");
    printf("date: %02d/%02d/%02d\n",
            tm_ptr->tm_year, tm_ptr->tm_mon+1,tm_ptr->tm_mday);
    printf("time: %02d:%02d:%02d\n",
            tm_ptr->tm_hour, tm_ptr->tm_min, tm_ptr->tm_sec);

    return 0;

}
