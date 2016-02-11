#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv){
    int *ptr, i;

    ptr = &i;
    printf("Address = %p\n", ptr);
    ptr++;
    printf("Address = %p\n", ptr);
    return 0;

}
/*
 * Pointers and Integers
The addition of an integer n to a pointer variable in a statement like
ptr = ptr + n;
increases its value by n × size of the pointer’s data type. For example, if ptr is declared
as a pointer to
• char: ptr is increased by n since the size of char is one byte
• int or float: ptr is increased by n×4 since the size of both int and float is
four bytes
• double: ptr is increased by n×8 since the size of double is eight bytes
 */
