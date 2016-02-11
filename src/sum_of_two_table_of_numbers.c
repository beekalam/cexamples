/*  calculate the sum of elements in two tables of integers */
/*  each 2-dimensional array is processed as an array of
 *  pointers to a set of 1-dimensional integer arrays */
#include <stdio.h>
#include <stdlib.h>
#define MAXROWS  20
/* function prototypes */
void readinput (int *a[MAXROWS], int nrows, int ncols);
void computesums(int *a[MAXROWS], int *b[MAXROWS],
                  int *c[MAXROWS], int nrows, int ncols);
void writeoutput(int *c[MAXROWS], int nrows, int ncols);
int main(int argc,char **argv){
    int row, nrows, ncols;

    /* pointer definitions */
    int *a[MAXROWS], *b[MAXROWS], *c[MAXROWS];

    printf("How many rows?");
    scanf("%d", &nrows);
    printf("How many columns?");
    scanf("%d", &ncols);

    /*  allocate initial memory */
    for (row = 0; row < nrows; ++row){
        a[row] = (int *) malloc (ncols * sizeof(int));
        b[row] = (int *) malloc (ncols * sizeof(int));
        c[row] = (int *) malloc (ncols * sizeof(int));
    }

    printf("\n\n First Table:\n");
    readinput(a, nrows, ncols);

    printf("\n\n Second table:\n");
    readinput(b, nrows, ncols);

    computesums(a, b, c, nrows, ncols);

    printf("\n\n Sums of the elements:\n\n");
    writeoutput(c, nrows, ncols);
    return 0;

}
void readinput(int *a[MAXROWS], int m, int n)
/*  read in a table of integers */
{
    int row, col;

    for(row = 0; row < m; ++row) {
        printf("\nEnter data fro row no. %2d \n", row + 1);
        for(col = 0; col < n; ++col)
            scanf("%d", (*(a + row) + col));
    }
    return;
}

void computesums(int *a[MAXROWS], int *b[MAXROWS], int *c[MAXROWS], int m, int n)
/*  add the elements of two integer tables */
{
    int row, col;

    for(row = 0; row < m; ++row)
      for(col = 0; col < n; ++col)
          *(*(c + row) + col) = *(*(a + row) + col) + *(*(b+row) + col);
    return;
}

void writeoutput(int *a[MAXROWS], int m, int n)
    /* write out  a table of integers */
{
    int row, col;

    for(row = 0; row < m; ++row){
        for(col =0; col < n; ++col)
            printf("%4d", *(*(a + row) + col));
        printf("\n");
    }
    return;
}
