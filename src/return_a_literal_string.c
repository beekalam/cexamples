#include <stdio.h>
char *returnALiteral(int code){
    switch(code){
        case 100:
            return "Boston processing center";
        case 200:
            return "Denver processing center";
        case 300:
              return "Atlanta processing center";
        case 400:
              return "san jose procesing center";
    }
}
int main(int argc,char **argv){
    int i=100;
    for(i=100; i <=400 ;i+=100)
        printf("%s\n",returnALiteral(i));
    \
    return 0;

}
