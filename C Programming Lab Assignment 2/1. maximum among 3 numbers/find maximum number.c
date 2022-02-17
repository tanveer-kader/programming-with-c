#include <stdio.h>
int main()
{
    double x,y,z;
        printf("Enter three numbers:");
        scanf("%lf %lf %lf", &x, &y, &z);
    if(x>y && x>z)
    {
        printf("%lf is the largest number", x);
    }
    else if(y>x && y>z)
    {
        printf("%lf is the largest numbrer", y);
    }
    else
    {
        printf("%lf is the largest number", z);
    }
    return 0;
}
