#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* 
Typedefs in C are weak, that is, they really do not introduce a new type. The
compiler doesn't distinguish between a typedef and its underlying type. 
typedef void *Handle;
void foo(void *);
void bar(Handle);

Handle h;
foo(h);         // coding bug not caught
bar(h);         // ok
The C solution is to create a dummy struct whose sole purpose is to get type
checking and overloading on the new type. 
struct Handle__ { void *value; }
typedef struct Handle__ *Handle;
void foo(void *);
void bar(Handle);

Handle h;
foo(h);         // syntax error
bar(h);         // ok
Having a default value for the type involves defining a macro, a naming
convention, and then pedantically following that convention: 
#define HANDLE_INIT ((Handle)-1)

Handle h = HANDLE_INIT;
h = func();
if (h != HANDLE_INIT)
    ...
For the struct solution, things get even more complex: 
struct Handle__ HANDLE_INIT;

void init_handle()  // call this function upon startup
{
    HANDLE_INIT.value = (void *)-1;
}

Handle h = HANDLE_INIT;
h = func();
if (memcmp(&h,&HANDLE_INIT,sizeof(Handle)) != 0)
    ...
There are 4 names to remember: Handle, HANDLE_INIT, struct Handle__, value. 
*/
int main(int argc,char **argv){
    return 0;

}
