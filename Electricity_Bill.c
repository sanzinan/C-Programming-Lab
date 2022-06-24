//Sanzinan Afrose
//ID: 221-35-927
#include<stdio.h>
int main()
{
    int customer_number,units;
    float bill;


    printf("Enter Customer Number,Units : ");
    scanf("%d %d",&customer_number,&units);

    if(units <= 200)
        bill = 0.50 * units;
    else if(units >= 201 && units <= 400)
        bill = 100 + 0.65 * (units - 200);
    else if(units >= 401 && units <= 600)
        bill = 230 + 0.85 * (units - 400);
    else
        bill = 390 + 1.00 * (units - 600);

    printf("\n Customer Number = %d",customer_number);
    printf("\n Units consumed  = %d",units);
    printf("\n Bill = %f",bill);

    return 0;
}
