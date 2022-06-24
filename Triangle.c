//Sanzinan Afrose
//ID: 221-35-927
#include<stdio.h>
int main()
{
    int first_angle,second_angle,third_angle,sum;


    printf("Enter first , second & third angle of triangle: ");
    scanf("%d %d %d",&first_angle, &second_angle, &third_angle);


    sum = first_angle+second_angle+third_angle;
    if(sum==180)
    {
        printf("Triangle is valid");

    }
    else
    {
        printf("Triangle is invalid");

    }


    return 0;


}
