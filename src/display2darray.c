#include <stdio.h>
void display2DArray(int arr[][5], int rows){
    int i=0,j=0;
    for(i=0;i < rows;++i){
        for(j=0; j < 5; ++j){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
}

int main(int argc,char **argv){
    int matrix[2][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10}
    };
    return 0;

}
