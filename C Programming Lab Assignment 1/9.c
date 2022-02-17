#include <stdio.h>
int main()
{
    double a, b, c, x1, x2;
        printf("Enter the value of a,b,c:");
        scanf("%lf %lf %lf", &a, &b, &c);
    x1 = (-b+sqrt((b*b)-(4*a*c)))/2*a;
    x2 = (-b-sqrt((b*b)-(4*a*c)))/2*a;
        printf("The value of x1:%lf\n", x1);
        printf("The value of x2:%lf\n", x2);
    return 0;
}
