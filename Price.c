//Sanzinan Afrose
//ID: 221-35-927
#include<stdio.h>
#include<conio.h>
int main()
{
    float cost_price, selling_price, profit, loss;

    printf("Enter the cost price of an item: ");
    scanf("%f", &cost_price);

    printf("Enter the selling price of an item: ");
    scanf("%f", &selling_price);

    if (selling_price > cost_price)
    {
        profit = selling_price - cost_price;
        printf("We earn %.2f profit by selling item.", profit);

    }

    else if (selling_price < cost_price)
    {

        loss = cost_price - selling_price;
        printf("\nWe incurred %.2f loss on selling item.", loss);
    }

    else
    {
        printf("\nWe don't get any loss and profit on selling item");
    }

    return 0;

}
