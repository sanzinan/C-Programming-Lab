//Sanzinan Afrose
//ID: 221-35-927
#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,x3,y3,slope1,slope2;
    printf("Enter value of slope: ");
    scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);


    slope1 = (y2-y1)/(x2-x1);
    slope2 = (y3-y2)/(x3-x2);

    if(slope1==slope2)
    {
        printf("On the same line\n");
    }
    else
    {
        printf("Not on the same line\n");
    }
    return 0;

}
