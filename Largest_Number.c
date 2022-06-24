//Sanzinan Afrose
//ID: 221-35-927
#include<stdio.h>
int main()
{
    int num1,num2,num3;

    printf("Enter three number: ");
    scanf("%d %d %d", &num1,&num2,&num3);

    printf("%d is the largest number\n",(num1>num2&&num1>num3)?num1:num2>num3?num2:num3);

    return 0;


}

