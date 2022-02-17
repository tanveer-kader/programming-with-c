#include <stdio.h>
int main()
{
    int x;
        printf("Check a year is Leap Year or not\n");
        printf("Enter a year:");
        scanf("%d", &x);
    if(x%4==0)
    {
        printf("RESULT: %d is a Leap Year", x);
    }
    else
    {
        printf("RESULT: %d is not a Leap Year", x);
    }
    return 0;
}
