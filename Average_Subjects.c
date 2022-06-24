//Sanzinan Afrose
//ID: 221-35-927
#include <stdio.h>
int main ()
{
    float math, eng, bang, ict, sci, marks;

    printf("Enter subjects number = ");
    scanf("%f %f %f %f %f", &math, &eng, &bang, &ict, &sci);


    marks = (math + eng + bang + ict + sci)/5;

    printf("The marks is = %.2f ", marks);


    return 0;

}
