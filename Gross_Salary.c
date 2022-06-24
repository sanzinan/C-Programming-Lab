//Sanzinan Afrose
//ID: 221-35-927
#include<stdio.h>
int main ()
{

    float base_salary,bonus, commission, computer_price, sold_computer, gross_salary;

    printf("Enter amount of computer price & total computer sold: ");
    scanf("%f %f", &computer_price, &sold_computer);

    base_salary = 1500.00;
    bonus = (sold_computer*200);
    commission = (computer_price*sold_computer*.02);
    gross_salary = base_salary + bonus + commission;

    printf(" The gross salary is = %.2f", gross_salary);


    return 0;


}
