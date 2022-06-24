//Sanzinan Afrose
//ID: 221-35-927
#include <stdio.h>
#include <math.h>
int main()
{

    int n,last_num,sum = 0,temp;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;

    while(temp > 0)
    {
        last_num = temp %10;
        sum = sum + last_num;
        temp = temp/10;
    }
    printf("The sum of digits = %d",sum);
    return 0;
}

