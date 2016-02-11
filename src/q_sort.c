#include <stdio.h>
#include <stdlib.h>
static int comp(const void *ele1, const void *ele2){
    return strcmp(*(const char **)ele1,
            *(const char **) ele2);
}
int main(int argc,char **argv){
    int num=3;
    char *array[3]={"aac","aaa","aab"};
    qsort(array, num,sizeof(*array),comp);
    int i;
    for(i=0;i < 3; ++i)
        printf("array[%d]:%s\n",i,array[i]);
    return 0;

}
