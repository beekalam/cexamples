#include <stdio.h>
typedef struct _person{
    char *firstName;
    char *lastName;
    char *title;
    unsigned int age;
}Person;

typedef struct _alternatePerson{
    char *firstName;
    char *lastName;
    char *title;
    short age;
}AlternatePerson;

int main(int argc,char **argv){
    Person person;
    AlternatePerson otherPerson;
    printf("%d\n",sizeof(person));   //16
    printf("%d\n",sizeof(otherPerson));  //16

    printf("%d\n",sizeof(unsigned));  //4
    printf("%d\n",sizeof(short));  //2
    return 0;

}
