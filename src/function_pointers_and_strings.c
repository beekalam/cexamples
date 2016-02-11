#include <stdio.h>
typedef int (fptrOperation)(const char*,const char*);
char* stringToLower(const char* string){
    char *tmp=(char*)malloc(strlen(string) + 1);
    char *start = tmp;
    while(*string!=0){
        *tmp++ = tolower(*string++);
    }
    *tmp=0;
    return start;
}

int compare(const char* s1,const char* s2){
    return strcmp(s1,s2);
}

int compareIgnoreCase(const char* s1,const char* s2){
    char* t1 = stringToLower(s1);
    char* t2 = stringToLower(s2);
    int result = strcmp(t1,t2);
    free(t1);
    free(t2);
    return result;
}
void sort(char *array[],int size,fptrOperation operation){
    int swap = 1;
    int i = 0;
    while(swap){
        swap = 0;
        for(i=0; i<size-1;i++){
            if(operation(array[i],array[i+1]) > 0){
                swap = 1;
                char *tmp = array[i];
                array[i] = array[i+1];
                array[i+1] = tmp;
            }
        }
    }
}
void displayNames(char *names[], int size){
    int i=0;
    for(i = 0; i < size;++i){
        printf("%s   ",names[i]);

    }
    printf("\n");
}

int main(int argc,char **argv){
    char *names[] ={"Bob", "Ted","Carol","Alice","alice"};
    sort(names,5,compare);
    displayNames(names,5);


    return 0;

}
