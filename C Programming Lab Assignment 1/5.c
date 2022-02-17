#include <stdio.h>
int main()
{
    double x, y, z, sum, avg;
    printf("Enter the marks:");
    scanf("%lf %lf %lf", &x, &y, &z);

    sum=x+y+z;
    avg=sum/3;

    printf("Total marks:%lf\n", sum);
    printf("Average marks:%lf\n", avg);

    return 0;

}
