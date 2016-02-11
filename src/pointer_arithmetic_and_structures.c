#include <stdio.h>
typedef struct _employee{
    char name[10];
    int age;
}Employee;
//pointer arithmetic with the structure’s fields. The following structure defines an Item
//consisting of three integers. While the three integer fields will normally be allocated in
//consecutive memory locations, there is no guarantee that they will be:
typedef struct _item{
    int partNumber;
    int quantity; 
    int binNumber;
}Item;
int main(int argc,char **argv){
    Employee employee;
    //employee.age = 27;

    printf("sizeof(employee):%d\n",sizeof(Employee));
    char *ptr = employee.name;
    ptr +=sizeof(employee.name);
    printf("employee.name:%p , employee.age:%p, ptr:%p\n",&(employee.name),&(employee.age),ptr);
    printf("%d",*ptr);

    Item part =  {12345, 35, 107};
    int *pi = &part.partNumber;
    printf("Part number: %d\n",*pi);
    pi++;
    printf("Quantity: %d\n",*pi);
    pi++;
    printf("Bin number:%d\n",*pi); 
  //  Normally, the output will be as expected, but it is not guaranteed to work. A better
  // approach is to assign each field to pi:
   pi = &part.partNumber;
   printf("Part number: %d\n",*pi);
   pi = &part.quantity;
   printf("Quantity: %d\n",*pi);
   pi = &part.binNumber;
   printf("Bin number:%d\n", *pi);
    return 0;

}
