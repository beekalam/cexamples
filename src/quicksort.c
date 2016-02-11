#include <stdlib.h>
#define exchange(A, B, T)   ((T) = (A), (A) = (B), \
                                         (B) = (T))
static void myQsort(const char *array[],size_t num){
    const char *temp;
    size_t i,j;
    if(num < 2)
        return;
    else if(num == 2){
        if(strcmp(array[0], array[1]) > 0)
                exchange(array[0], array[1],temp);
    }
    //partition the array using the middle(num/2)
    //element as the dividing element
    exchange(array[0],array[num/2],temp);
    i = 1;
    j = num;
    for(;;){
      //sweep forward until an element is found
      //that belongs  in the second partition
      while (i < j && strcmp(array[i],array[0]) <= 0)
        i++;
        //Then sweep backward until an element
        //is found that belongs in the first
        //partition
        while(i < j && strcmp(array[j-1],array[0]) >= 0)
          j--;
          //if no out-of-place elements, youre done
          if(i >= j)
            break;
          exchange(array[i], array[j-1], temp);
    }
    //restore dividing element
    exchange(array[0],array[i-1],temp);
    //now apply quick sort to each partition
    myQsort(array, i - 1);
    myQsort(array + i, num - 1);
}
void displayarray(char *ar[],int size){
    int i = 0;
    for(i=0;i < size; ++i){
        printf("ar[%d]:%s\n",i,ar[i]);
    }
}
int main(int argc,char **argv){
    char *arr[]={"bob","zeynab","alice","john"};
    myQsort(arr,sizeof(arr)/sizeof(arr[0]));
    displayarray(arr, sizeof(arr)/sizeof(arr[0]));
    return 0;

}
