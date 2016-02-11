#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void create_sample_file(void){
    FILE* p= fopen("sample.dat","w+");
    if(p){
        fclose(p);
    }
}
/* *********************************** */
#define TRUE  1
typedef struct {
    int month;
    int day;
    int year;
} date;

typedef struct {
    char name[80];
    char street[80];
    char city[80];
    int acct_no;
    char acct_type;
    float oldbalance;
    float newbalance;
    float payment;
    date lastpayment;
} record;


record readfile(record customer);
void writefile(record customer);
FILE *ptold, *ptnew;
int month, day, year;

int main(int argc,char **argv){

    int flag = TRUE;
    record customer;
    /*  open data files */
    if((ptold = fopen("records.dat","r")) == NULL)
        printf("\nError - cannot open the designated read file\n");
    else {
        ptnew = fopen("records.new", "w");

        /* enter current date */
        printf("CUSTOMER BILLING SYSTEM - UPDATE\n");
        printf("Please enter today\'s date (mm/dd/yyyy): ");
        scanf("%d/%d/%d",&month, &day, &year);
        while (flag){
            fscanf(ptold, " %[^\n]", customer.name);
            fprintf(ptnew, "\n%s\n", customer.name);
            /* test for stopping condition */
            if(strcmp(customer.name, "END") == 0)
                break;
            /*  read remaining data from old data file */
            customer = readfile(customer);

            /*prompt for updated information */
            customer = update(customer);

            /* write updated information to new data file */
            writefile(customer);

        }
        fclose(ptold);
        fclose(ptnew);
    }
    return 0;
}

record readfile(record customer)
{
    fscanf(ptold, " %[^\n]", customer.street);
    fscanf(ptold, " %[^\n]", customer.city);
    fscanf(ptold, " %d", &customer.acct_no);
    fscanf(ptold, " %c", &customer.acct_type);
    fscanf(ptold, " %f", &customer.oldbalance);
    fscanf(ptold, " %f", &customer.newbalance);
    fscanf(ptold, " %f", &customer.payment);
    fscanf(ptold, " %d/%d/%d", &customer.lastpayment.month,
                               &customer.lastpayment.day,
                               &customer.lastpayment.year);
    return customer;
}
record update(record customer)
{
    printf("\n\nName:   %s", customer.name);
    printf("    Account Number: %d\n", customer.acct_no);
    printf("\nOld balance: %7.2f", customer.oldbalance);
    printf("   Current payment: ");
    printf("%f", &customer.payment);
    if (customer.payment > 0){
        customer.lastpayment.month = month;
        customer.lastpayment.day = day;
        customer.lastpayment.year = year;
        customer.acct_type = (customer.payment < 0.1 * customer.oldbalance) ? 'O' : 'C';
    }else
        customer.acct_type = (customer.oldbalance > 0) ? 'D' : 'C';
    customer.newblance = customer.oldbalance - customer.payment;
    printf("New balance: %7.2f", customer.newbalance);
    printf("   Account status: ");
    switch(customer.acct_type){
        case 'C':
            printf("CURRENT\n");
            break;
        case 'O':
            printf("OVERDUE\n");
            break;
        case 'D':
            printf("DELIQUENT\n");
            break;
        default:
            printf("ERROR\n");
    }
    return customer;
}
void writefile(record customer)
{
    fprintf(fpt, "%s\n", customer.street);
    fprintf(fpt, "%s\n", customer.city);
    fprintf(fpt, "%d\n", customer.acct_no);
    fprintf(fpt, "%c\n", customer.acct_type);
    fprintf(fpt, "%.2f\n", customer.oldbalance);
    fprintf(fpt, "%.2f\n", customer.newbalance);
    fprintf(fpt, "%.2f\n", customer.payment);
    fprintf(fpt, "%d/%d/%d\n", customer.lastpayment.month,
                               customer.lastpayment.day,
                               customer.lastpayment.year);
    return;
}

