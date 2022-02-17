#include <stdio.h>
int main()
{
    int x;
        printf("Check a Number is divisible by 5 and 11\n");
        printf("Enter a number:");
        scanf("%d", &x);
    if(x%5==0 && x%11==0)
    {
        printf("RESULT: %d is divisible by 5 and 11", x);
    }
    else
    {
        if(x%5==0 && x%11!=0)
        {
            printf("RESULT: %d is only divisible by 5", x);
        }
        else if(x%5!=0 && x%11==0)
        {
            printf("RESULT: %d is only divisible by 11", x);
        }
        else
        {
            printf("RESULT: %d is not divisible by 5 and 11", x);
        }
    }

    return 0;

}
