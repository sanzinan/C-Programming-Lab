//Sanzinan Afrose
//ID: 221-35-927
#include <stdio.h>
int main()
{
    int number, factorial=1, i;

    printf("Enter the number: ");
    scanf("%d", &number);

    for(i=1; i<= number; i++)
    {

        factorial = factorial* i;

    }

    printf("The factorial is : %d\n", factorial);



    return 0;
}


