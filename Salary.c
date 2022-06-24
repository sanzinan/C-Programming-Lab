//Sanzinan Afrose
//ID: 221-35-927
#include<stdio.h>
int main ()
{
    float basic_salary, dearness_allowence, house_rent, gross_salary;
    printf("Enter amount of basic salary = ");
    scanf("%f", &basic_salary);

    dearness_allowence = (basic_salary * .4);
    house_rent = ( basic_salary * .2);

    gross_salary = basic_salary + dearness_allowence + house_rent;
    printf("The gross salary is = %.2f ", gross_salary);


    return 0;

}

