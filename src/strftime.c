#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
/* 
size_t strftime(char *s, size_t maxsize, const char *format, struct tm *timeptr);
The strftime function formats the time and date represented by the tm structure pointed to by
timeptr and places the result in the string s. This string is specified as (at least) maxsize characters
long. The format string is used to control the characters written to the string. Like printf, it contains
ordinary characters that will be transferred to the string and conversion specifiers for formatting time
and date elements. The conversion specifiers include the following:
Continued on next page
Conversion Specifier Description
%a Abbreviated weekday name
%A Full weekday name
%b Abbreviated month name
%B Full month name
%c Date and time
%d Day of the month, 01-31
%H Hour, 00-23
%I Hour in 12-hour clock, 01-12
%j Day of the year, 001-366
%m Month of the year, 01-12
%M Minutes, 00-59
%p a.m. or p.m.
%S Seconds, 00-61
%u Day in the week, 1-7 (1 = Monday)
%U Week in the year, 01-53 (Sunday is the first day of the week.)
%V Week in the year, 01-53 (Monday is the first day of the week.)
%w Day in the week, 0-6 (0 = Sunday)
%x Date in local format
Conversion Specifier Description
%X Time in local format
%y Year number less 1900
%Y Year
%Z Time zone name
%% A % character
So, the usual date as given by the date program corresponds to a strftime format string of
“%a %b %d %H:%M:%S %Y”
To help with reading dates, you can use the strptime function, which takes a string representing a date
and time and creates a tm structure representing the same date and time:
#include <time.h>
char *strptime(const char *buf, const char *format, struct tm *timeptr);
The format string is constructed in exactly the same way as the format string for strftime. strptime
acts in a similar way to sscanf in that it scans a string, looking for identifiable fields, and writes them
into variables. Here it’s the members of a tm structure that are filled in according to the format string.
However, the conversion specifiers for strptime are a little more relaxed than those for strftime
because strptime will allow both abbreviated and full names for days and months. Either representation will match a %a specifier in strptime. Also, where strftime always uses leading zeros on numbers less than 10, strptime regards them as optional.
strptime returns a pointer to the character following the last one consumed in the conversion process.
If it encounters characters that can’t be converted, the conversion simply stops at that point. The calling
program needs to check that enough of the passed string has been consumed to ensure that meaningful
values have been written to the tm structure.
*/
int main(int argc,char **argv){
     struct tm *tm_ptr, timestruct;
     time_t the_time;
     char buf[256];
     char *result;

     (void) time(&the_time);
     tm_ptr = localtime(&the_time);
     strftime(buf, 256, "%A %d %B, %I:%S %p",tm_ptr);
     printf("strftime gives:%s\n",buf);

     strcpy(buf, "Thu 26 July 2007, 17:53 will do fine");


      return 0;

}
