#include <stdio.h>
int main()
{
    int x;
        printf("Check a number is even or odd\n");
        printf("Enter a number:");
        scanf("%d", &x);
    if(x%2==0)
    {
        printf("RESULT: %d is even", x);
    }
    else
    {
        printf("RESULT: %d is odd", x);
    }
    return 0;
}
