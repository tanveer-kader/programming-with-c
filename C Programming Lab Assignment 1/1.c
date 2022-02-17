#include <stdio.h>
int main()
{
    int x,y;
    float sum, sub, mul, div;

    printf("Enter two integer numbers:");
    scanf("%d %d", &x, &y);

    sum = x+y;
    sub = x-y;
    mul = x*y;
    div = x/y;

    printf("addition: %f\n", sum);
    printf("subtraction: %f\n", sub);
    printf("multiplication: %f\n", mul);
    printf("division: %f\n", div);

    return 0;
}
