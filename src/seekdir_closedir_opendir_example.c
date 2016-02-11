#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#define array_size(buf) ( (sizeof(buf))/(sizeof(buf[0])) )
int main(int argc,char **argv){
    //make a newdir directory
    int ret = mkdir("newdir");

    //save the current dir before changing directory
    char buf[256];
    char *status = getcwd(buf,array_size(buf));
    if(status == NULL) {
        printf("buffer to small in getcwd(buf\n");
        exit(1);
    }

    //change directory and write a test file
    ret = chdir("newdir");
    FILE* fp = fopen("temp.txt","w");
    fprintf(fp,"some data\n");
    fprintf(fp,"some other data\n");
    fclose(fp);
    
    //get back to the primary directory
    ret = chdir(buf);
    DIR* dir = opendir("newdir");
    if(dir == NULL){
        printf("\ncould not open dir\n");
        exit(1);
    }
    //read the contents of newdir dir
    //struct dirent *readdir(DIR *dirp);
    //char d_name[]: the name of the file
    struct dirent* de = readdir(dir);
    long int items = 0;
    while (de){
          printf("%s\n",de->d_name);
          seekdir(dir, ++items);
          de = readdir(dir);
    }
    //int closedir(DIR *dirp);
    //return 0 on success -1 otherwise
    closedir(dir);
    return 0;

}
