//Sanzinan Afrose
//ID: 221-35-927
#include<stdio.h>
int main ()
{
    int number1, number2;

    printf("Enter two numbers: ");
    scanf("%d %d", &number1, &number2);

    number1 = number1 - number2;
    number2 = number1 + number2;
    number1 = number2 - number1;


    printf("Number1 is = %d\n", number1);
    printf("Number2 is = %d\n", number2);



    return 0;

}
