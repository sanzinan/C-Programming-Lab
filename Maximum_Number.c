//Sanzinan Afrose
//ID: 221-35-927
#include <stdio.h>
int main ()

{

    int a,b;

    printf ("Enter two numbers = ");
    scanf(" %d %d", &a,&b);

    if (a>b)

    {

        printf("%d is greater than %d", a,b);

    }

    else if (b>a)

    {

        printf("%d is greater than %d",b,a);

    }

    else

    {

        printf("%d,%d are equal",a,b);

    }

    return 0;
}
