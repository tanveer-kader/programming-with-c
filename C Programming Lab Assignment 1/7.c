#include <stdio.h>
int main()
{
    double a, b, c, area, s;
        printf("Enter the lengths of the triangle:");
        scanf("%lf %lf %lf", &a, &b, &c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Area of the tringle is:%lf", area);
    return 0;
}
