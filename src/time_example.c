#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
//time_t time(time_t *tloc);
int main(int argc,char **argv){
    int i;
    time_t the_time;
    for(i = 1; i <=10; ++i) {
        //time(NULL) returns the time and date as a number of seconds
      the_time = time((time_t*)0);
      printf("The time is %ld\n",the_time);
      //sleep for 2 seconds
      sleep(2);
    }
    
    return 0;

}
