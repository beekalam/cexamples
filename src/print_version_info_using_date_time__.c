#include <stdio.h>
void print_version_info(){
    printf("Date compiled:%s\n",__DATE__);
    printf("Time compiled:%s\n",__TIME__);
}
int main(int argc,char **argv){
    print_version_info();
    return 0;

}
