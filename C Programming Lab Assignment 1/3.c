#include <stdio.h>
int main()
{
    double f,c;
    printf("Enter the temp. in fahrenheit:");
    scanf("%lf", &f);

    c = (5/9)*(f-32);
    printf("The temp. in celcius: %lf", c);

    return 0;
}
