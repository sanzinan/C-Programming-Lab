//Sanzinan Afrose
//ID: 221-35-927
#include<stdio.h>
#include <math.h>
int main ()
{


    float a, b, c, s,  perimeter, area;

    printf("Enter the value of a, b & c : ");
    scanf("%f %f %f", &a, &b, &c);

    perimeter = a+b+c;
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("%.2f\n", perimeter);
    printf("%.2f\n", area);


    if(area > perimeter)
    {
        printf("Area Greater");

    }

    else
    {
        printf("Perimeter smaller");
    }

    return 0;

}

