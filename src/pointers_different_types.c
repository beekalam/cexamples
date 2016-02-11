#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv){
    int *p;  /* p is a pointer to an integer quantity */

    int *p[10];   /*  p is a 10-element array of pointers to integer quantities */

    int (*p)[10];   /*  p is a pointer to a 10-element intger array */

    int  *p(void);   /*  p is  a function that returns a pointer
                        to an integer quantity */
    
    int p(char *a);   /*  p is a function that accepts an argument which is
                          a pointer to a character array that returns an
                            integer quantity */
    int *p(char *a);   /*  p is  a function that accepts an argument which
                            is a pointer to a character returns a pointer to
                           an integer quantity */

    int (*p)(char *a);   /*  p is a pointer to a function that accepts an
                            argument which is a pointer to a character returns
                            an intger quantity */
    int (*p(char *a))[10]  /*  p is a function that accepts which is a pointer
                              to a character returns a pointer to a 10-element
                             integer array */

    int p(char (*a)[]);    /*  p is a function that accepts an argument which
                                is a pointer to a character array returns an
                               integer quantity */

    int p(char *a[]);      /*  p is a function that accepts an argument which is of
                              array of pointers to characters returns an integer
                              quantity */
    int *p(char a[]);     /*  p is a function that accepts an argument which
                            is a character array returns a pointer to an integer
                            quantity */
    int *p(char (*a)[]);   /*  p is a function that accepts an argument which
                              is a pointer to a character array that returns
                             a pointer to an integer quantity */
    int *p(char *a[]);    /*  p is a function that  accepts an argument which
                               is an array of pointers to characters return
                              a pointer to an integer quantity */
    int (*p)(char (*a)[]);  /*  p is a pointer to a function that  accepts an
                              argument which is apointer to a character array
                             returns an integer quantity */
    int *(*p)(char (*a)[]);  /*  p is a pointer to a function that 
                                accepts an argument which is a pointer to a
                               character array returns a pointer to an integer
                              quantity */
    int *(*p)(char *a[]);    /*  p is a pointer to a function that accepts an
                                argument which is an array of pointers to 
                               characters returns a pointer to an integer quantity */
    int (*p[10])(void);     /*  p is a 10-element array of pointers to functions;
                                each function returns an intger quantity */

    int (*p[10])(char a);   /*  p is a 10-element array of pointers to functions;
                             each function accepts an argument which is a character,
                            and returns an integer quantity */
    int *(*p[10])(char a);  /*  p is a 10-element array of pointers to functions;
                                each function accepts an argument which is a charachter
                                and returns a pointer to an integer quantity */
    int *(*p[10])(char *a);  /*  p is a 10-element array of pointers to functions;
                                 each function accepts an argument which is a pointer
                                to a character, and returns a pointer to an integer
                                quantity */
    
    return 0;

}
