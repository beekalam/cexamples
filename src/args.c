#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
//int getopt(int argc, char *const argv[], const char *optstring);
//extern char *optarg
//extern int optind, opterr, optopt
//the getopt function takes the argc and argv parameters 
//as passed to the program's main function and  an 
//options specifier string that tells getopt what options
//are defined for the program and whether they have
//associated values.The optstring is simply a list of characters
//each representing a single character option.
//if a character is followed by a colon, it indicates that the option
//has an associated value that will be taken as the next
//argument.the getopts command in bash performs a very similar function
//for example, the following call would be used to handle the preceding example:
//getopt(argc, argv, "if:lr")
//it allows for simple -i, -l -r and -f , followed by a filename argument.
//Calling the command with the same parameters but in different order will 
//alter the behavior.
//./argopt -i -lr 'hi there' -f fred.c -q
/* 
 * The program repeatedly calls getopt to process option arguments until none
 * remain, at which point
getopt returns -1. The appropriate action is taken for each option, including
dealing with unknown
options and missing values. Depending on your version of getopt, you might see
slightly different output from that shown here — especially error messages —
but the meaning will be clear.
Once all options have been processed, the program simply prints out the
remaining arguments as before,
but starting from optind.
 * */
int main(int argc,char **argv){
    int opt;
    while((opt = getopt(argc, argv,":if:lr")) != -1){
        switch(opt){
            case 'i':
            case 'l':
            case 'r':
                printf("option: %c\n", opt);
                break;
            case 'f':
                printf("filename: %s\n", optarg);
                break;
            case ':':
                printf("option needs a value\n");
                break;
        }
    }
    for(; optind < argc; optind++)
        printf("argument:%s \n",argv[optind]);
    return 0;

}
