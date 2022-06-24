//Sanzinan Afrose
//ID: 221-35-927
#include <stdio.h>
int main ()
{

    int i, max;
    int arr [5];

    printf("Enter 5 elements: \n");

    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for(i=1; i<5; i++)
    {

        if(arr[i]>max)
            max = arr[i];
    }


    printf("Maximum element is %d\n", max);



}
