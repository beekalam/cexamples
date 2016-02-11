#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

static char *
int2str(int n){
    int minus = (n < 0);
    static char buf[32];
    char *p = &buf[31];
    if(minus)
        n = -n;
    *p='\0';
    do{
        *--p = '0' + n % 10;
        n /=10;
    }while(n>0);
    if(minus)
        *--p = '-';
    return p;
}
void 
simplePrintf(const char *format, ... )
{
    va_list ap;  // ap is an argument pointer
    int i;
    char *s;
    //initialize ap to start with the argument after "format"
    va_start(ap, format);
    for(; *format; format++){
        if(*format != '%'){
            putchar(*format);
            continue;
        }
        switch(*++format){
            case 's':
                //get next argument (a char*)
                s = va_arg(ap, char *);
                break;
            case 'd':
                i = va_arg(ap, int);
                s = int2str(i);
                fputs(s, stdout);
                break;
            case '\0':
                format--;
                break;
            default:
                putchar(*format);
                break;
        }
    }
    //clean up varying arguments before running
    va_end(ap);
}
int main(int argc,char **argv){
    simplePrintf("The %s tax rate is %d%%.\n","sales", 6);
    return 0;

}
