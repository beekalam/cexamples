#include <stdio.h>
struct circ_list
{
    char value[3];
    struct circ_list   *next;
};
struct circ_list suffixes[] ={
    "th", & suffixes[1],
    "st", & suffixes[2],
    "nd", & suffixes[3],
    "rd", & suffixes[4],
    "th", & suffixes[5],
    "th", & suffixes[6],
    "th", & suffixes[7],
    "th", & suffixes[8],
    "th", & suffixes[9],
    "th", & suffixes[0],
};
#define MAX 20
int main(int argc,char **argv){
    int i = 0;
    struct circ_list *p = suffixes;
    while (i <= MAX){
        printf("%d%s\n",i, p->value);
        ++i;
        p = p->next;
    }
    return 0;

}
