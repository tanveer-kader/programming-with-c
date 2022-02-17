#include <stdio.h>
int main()
{
    double x,y,z;
        printf("Enter three numbers:");
        scanf("%lf %lf %lf", &x, &y, &z);
    if(x==y && y==z)
    {
        printf("The numbers are equal");
    }
    else if(x==y)
    {
            printf("%0.2lf and %0.2lf are equal\n", x, y);
        if(x>z)
        {
            printf("%0.2lf is the minimum number", z);
        }
        else
        {
            printf("%0.2lf is the maximum number", z);
        }
    }
    else if(x==z)
    {
            printf("%0.2lf and %0.2lf are equal\n", x, z);
        if(x>y)
        {

            printf("%0.2lf is the minimum number", y);
        }
        else
        {
            printf("%0.2lf is the maximum number", y);
        }
    }
    else if(y==z)
    {
            printf("%0.2lf and %0.2lf are equal\n", y, z);
        if(y>x)
        {
            printf("%0.2lf is the minimum number", x);
        }
        else
        {
            printf("%0.2lf is the maximum number", x);
        }
    }
    else if(x>y && x>z)
    {
            printf("%0.2lf is the maximum number\n", x);
        if(y>z)
        {
            printf("%0.2lf is middle number\n", y);
            printf("%0.2lf is the minimum number", z);
        }
        else
        {
            printf("%0.2lf is middle number\n", z);
            printf("%0.2lf is the minimum number", y);
        }
    }
    else if(y>x && y>z)
    {
            printf("%0.2lf is the maximum number\n", y);
        if(x>z)
        {
            printf("%0.2lf is middle number\n", x);
            printf("%0.2lf is the minimum number", z);
        }
        else
        {
            printf("%0.2lf is middle number\n", z);
            printf("%0.2lf is the minimum number", x);
        }
    }
    else
    {
            printf("%0.2lf is the maximum number\n", z);
        if(x>y)
        {
            printf("%0.2lf is middle number\n", x);
            printf("%0.2lf is the minimum number", y);
        }
        else
        {
            printf("%0.2lf is middle number\n", y);
            printf("%0.2lf is the minimum number", x);
        }
    }
    return 0;
}
