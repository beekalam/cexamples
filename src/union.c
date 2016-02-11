#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv){
    union id {
        char color;
        int size;
    };

    struct{
        char manufacturer[20];
        float cost;
        union id description;
    }shirt, blouse;

    printf("%d\n", sizeof(union id));

    /* assign a value to color */
    shirt.description.color = 'w';
    printf("%c %d\n", shirt.description.color, shirt.description.size);

    /* assign a value to size*/
    shirt.description.size = 12;
    printf("%c %d\n", shirt.description.color, shirt.description.size);
    
    return 0;

}
