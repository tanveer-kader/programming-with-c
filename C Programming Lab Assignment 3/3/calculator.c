#include <stdio.h>
int main()
{
    double x,y;
    char o;
    printf("enter the calculation:\n");
    scanf("%lf %c %lf", &x, &o, &y);

    switch(o)
    {
        case '+':
        printf("%0.2lf %c %0.2lf = %0.2lf", x,o,y,x+y);
        break;
        case '-':
        printf("%0.2lf %c %0.2lf = %0.2lf", x,o,y,x-y);
        break;
        case '*':
        printf("%0.2lf %c %0.2lf = %0.2lf", x,o,y,x*y);
        break;
        case '/':
        printf("%0.2lf %c %0.2lf = %0.2lf", x,o,y,x/y);
        break;
    }
    return 0;
}
