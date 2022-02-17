#include <stdio.h>
int main()
{
    double lc, li;

    printf("Enter the length in centimeter:");
    scanf("%lf", &lc);

    li = lc/2.54;
    printf("The length in inch:%lf", li);

    return 0;
}
