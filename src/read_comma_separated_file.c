#include <stdio.h>
#include <string.h>
typedef struct name_str
{
    char first_name[15];
    char nick_name[30];
    unsigned years_known;
}NICKNAME;
NICKNAME nick_names[5];

void set_name(unsigned name_num,char* f_name, char* n_name, unsigned years){
   strcpy(nick_names[name_num].first_name, f_name);
  strcpy(nick_names[name_num].nick_name, n_name);
 nick_names[name_num].years_known = years; 
}

int main(int argc,char **argv){
    FILE* name_file;
    int  x;
    NICKNAME tmp_name;
    printf("\nWriting data to NICKNAME.DAT, one moment please...\n");
    //initialize the data with some values .. /*
    set_name(0, "Sheryl", "Basset", 26);
    set_name(1, "joel",  "Elkintor", 1);
    set_name(2,  "cliff",  "shayface", 12);
    set_name(3,  "loyd",  "lloydage", 28);
    set_name(4,  "scott",  "pie",  9);
    //open the NICKNAME.DAT file for output in text mode
    name_file = fopen("NICKNAME.DAT", "wt");
    //Iterate through all the data and use the frprintf function
    //to write the data to a file
    for (x=0; x < 5; ++x){
        fprintf(name_file,"\"%s\", \"%s\", %u\n",
                nick_names[x].first_name,
                nick_names[x].nick_name,
                nick_names[x].years_known);
    }
    //close the file and reopen it for input
    fclose(name_file);
 
    printf("\n closed NICKNAME.DATA, reopening for input...\n");
    name_file = fopen("NICKNAME.DAT", "rt");
    printf("\nContents of the file NICKNAME.DAT:\n\n");
    //read each line in the file using the scanf() functions and
    //print the file's content
     
    while(1)
    {
        fscanf(name_file, "%s %s %u",
                tmp_name.first_name,
                tmp_name.nick_name,
                &tmp_name.years_known);

        if(feof(name_file))
            break;

        printf("%-15s %-30s %u\n", tmp_name.first_name,
                                    tmp_name.nick_name,
                                    tmp_name.years_known);
    }
        fclose(name_file);
    
    return 0;

}
