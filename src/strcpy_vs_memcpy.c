#include <stdio.h>
#include <string.h>
typedef struct cust_str{
    int id;
    char last_name[20];
    char first_name[15];
}customer;

int main(int argc,char **argv){
    char* src_string = "This is the source string";
    char  dest_string[50];
    customer src_cust;
    customer dest_cust;
    printf("Hello I'm going to copy src_string into det_string\n");
    printf("Done! dest_string is: %s\n",strcpy(dest_string,src_string));
    printf("copy src_cust into dest_cust:\n");
    src_cust.id = 1;
    strcpy(src_cust.last_name, "Strahan");
    strcpy(src_cust.first_name, "troy");
    memcpy(&dest_cust, &src_cust, sizeof(customer));
    printf("I just copied customer number #%d (%s %s)",
            dest_cust.id, dest_cust.first_name, dest_cust.last_name);
    return 0;

}
