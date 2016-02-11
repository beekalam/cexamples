#include <stdio.h>

int main(int argc, char **argv){
    int orig_stdout;
    //duplicate the stdout file handle and store it in orig_stdout
    orig_stdout = dup(fileno(stdout));

    //this text appears on screen
    printf("writing to original stdout .... \n");

    //reopen stdout and redirect it to the "redir.txt" file.
    freopen("redir.tmp.txt","w",stdout);

    //this appears in the "redir.txt" file.
    printf("writing to redirected stdout..\n");
    
    fclose(stdout);
    //restore the original stdout and print to the screen again.
    fdopen(orig_stdout,"w");
    printf("i'm back writing to the original stdout.\n");

    
    return 0;
}
