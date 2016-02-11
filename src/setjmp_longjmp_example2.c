#include <setjmp.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//You must call setjmp() to initialize the jmp_buf variable. If setjmp() returns 0, you have just initialized the
//jmp_buf. If setjmp() returns anything else, your program just jumped to that point via a call to longjmp().
//In that case, the return value is whatever your program passed to longjmp().
//Conceptually, longjmp() works as if when it is called, the currently executing function returns. Then the
//function that called it returns, and so on, until the function containing the call to setjmp() is executing.
//Then execution jumps to where setjmp() was called from, and execution continues from the return of
//setjmp(), but with the return value of setjmp() set to whatever argument was passed to longjmp().
//In other words, if function f() calls setjmp() and later calls function g(), and function g() calls function
//h(), which calls longjmp(), the program behaves as if h() returned immediately, then g() returned
//immediately, then f() executed a goto back to the setjmp() call.
//What this means is that for a call to longjmp() to work properly, the program must already have called
//setjmp() and must not have returned from the function that called setjmp(). If these conditions are not
//fulfilled, the operation of longjmp() is undefined (meaning your program will probably crash). The program
//in Listing XII.9 illustrates the use of setjmp() and longjmp(). It is obviously contrived, because it would be
//simpler to write this program without using setjmp() and longjmp(). In general, when you are tempted to
//use setjmp() and longjmp(), try to find a way to write the program without them, because they are easy to
//misuse and can make a program difficult to read and maintain.
#define RETRY_PROCESS 1
#define QUIT_PROCESS 2
jmp_buf env;
int nitems;
int procItem(){
    char buf[256];
    if(gets(buf) && strcmp(buf, "done")){
        if(strcmp(buf, "quit") == 0)
            longjmp(env, QUIT_PROCESS);
        if(strcmp(buf, "restart") == 0)
            longjmp(env,RETRY_PROCESS);
        nitems++;
        return 1;
    }
    return 0;
}
void process(){
    printf("Enter items, followed by 'done'\n");
    printf("At any time, you can type 'quit' to exit\n");
    printf("or 'restart' to start over again\n");
    nitems = 0;
    while(procItem())
        ;

}

int main(int argc,char **argv){
    for(;;){
        switch(setjmp(env)){
            case 0:
            case RETRY_PROCESS:
                process();
                printf("You typed in %d items.\n" ,nitems);
                break;
            case QUIT_PROCESS:
            default:
                exit(0);
        }
    }

}
