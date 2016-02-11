#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#include <tchar.h>
/*
C uses the wchar_t and the L prefix on strings: 
#include <wchar.h>
char foo_ascii[] = "hello";
wchar_t foo_wchar[] = L"hello";
Things get worse if code is written to be both ascii and wchar compatible. A macro is used to switch strings from ascii to wchar: 
#include <tchar.h>
tchar string[] = TEXT("hello");
 * 
 */
int main(int argc,char **argv){
      
    char foo_ascii[] = "hello";
    wchar_t foo_wchar[] = L"hello";

    return 0;

}
