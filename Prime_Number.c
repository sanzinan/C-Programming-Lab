//Sanzinan Afrose
//ID: 221-35-927
#include <stdio.h>
int main()
{
    int number, count=0, i;

    printf("Enter the number: ");
    scanf("%d", &number);

    for(i=2; i< number; i++)
    {

        if(number%i==0)
        {
            count++;
            break;
        }

    }

    if (count ==0)
        printf("Prime Number");

    else
        printf("Not a prime number");

    return 0;
}

