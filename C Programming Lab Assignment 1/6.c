#include <stdio.h>
int main()
{
    double a,b,c;
        printf("Enter the lengths of the triangle:");
        scanf("%lf %lf", &a, &b);
    c = sqrt(a*a+b*b);
        printf("The hypotenuse of the triangle:%lf", c);
    return 0;
}
