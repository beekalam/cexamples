#include <stdio.h>
//void perror(const char *s);
int main(int argc,char **argv){
    //the perror functions maps the current
    //error, as reported in errno, into a string
    //and prints it on the standard error stream
    perror("program");
    return 0;

}
