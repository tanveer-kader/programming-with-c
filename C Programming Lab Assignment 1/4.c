#include <stdio.h>
int main()
{
    double r, pi, area, circum;
    pi=3.1416;
    printf("Enter the redius:");
    scanf("%lf", &r);

    area=pi*r*r;
    circum=2*pi*r;

    printf("Area of the circle:%lf\n", area);
    printf("Circumference of the circle:%lf\n", circum);

    return 0;

}
