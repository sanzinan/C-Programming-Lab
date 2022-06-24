//Sanzinan Afrose
//ID: 221-35-927
#include<stdio.h>
int main()
{
    int num1, num2, add, subtract, multiply, divide;

    printf("Enter any two numbers = ", num1, num2);
    scanf("%d %d", &num1, &num2);

    add = num1 + num2;
    subtract = num1 - num2;
    multiply = num1 * num2;
    divide = num1 / num2;

    printf("The add result is: %d\n", add);
    printf("The subtract result is: %d\n", subtract);
    printf("The multiply result is: %d\n", multiply);
    printf("The divide result is: %d\n", divide);

    return 0;


}
