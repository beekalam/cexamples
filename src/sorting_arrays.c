#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * Although many C programmers tend to reimplmement bubble sorts over
 * and over, the right way to sort in C is to use qsort(): 
int compare(const void *p1, const void *p2)
{
    type *t1 = (type *)p1;
    type *t2 = (type *)p2;

    return *t1 - *t2;
}

type array[10];
...
qsort(array, sizeof(array)/sizeof(array[0]),
	sizeof(array[0]), compare);
A compare() must be written for each type, and much careful typo-prone
code needs to be written to make it work. 
 */

#define size_of(arr) ( (sizeof(arr)) / (sizeof(arr[0])) )

int  signof(const double v)
{
    int  ret = 0;
    
    if (v < 0) ret = -1;
    if (v > 0) ret =  1;

    return ret;
}

int int_compare( const void *p1, const void *p2) 
{
    int *t1 = (int *)p1;
    int *t2 = (int *)p2;

    return *t1 - *t2;
}

int double_compare(const void *p1, const void *p2)
{
    double *t1 = (double *)p1;
    double *t2 = (double *)p2;

    return signof( *t1 - *t2);
}

void printint_array(int  *arr, int size)
{
  int  i = 0;

  for (i = 0; i < size; ++i) {
      printf("a[%d] = %d   ", i, arr[i]);
  }

  printf("\n");
}

void printdouble_array(double *arr, int  size)
{
  int  i = 0;

  for (i = 0; i < size; ++i) {
      printf("a[%d] = %f   ", i, arr[i]);
  }

  printf("\n");
}

int main(int argc,char **argv){

    int array[4] = { 5 , 4, 1, 0 };

    qsort(array, size_of(array),
                sizeof(array[0]), int_compare);
    printint_array(array,size_of(array) ); 

    double arr[4] = { 5.1, 5.2, 1.0, 0.0 };
    qsort(arr, size_of(arr),
               sizeof(arr[0]), double_compare);

    printdouble_array(arr, size_of(arr));
    return 0;

}
