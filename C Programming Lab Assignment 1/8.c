#include <stdio.h>
int main()
{
    double x,y,X;
        printf("Enter the value of x:");
        scanf("%lf", &x);
    X = (x-1)/x;
    y = X + (X*X)/2+(X*X*X)/3+(X*X*X)/4;
        printf("Evaluation of the polynomial is:%lf", y);
    return 0;
}
