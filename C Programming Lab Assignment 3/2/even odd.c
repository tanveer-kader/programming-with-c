#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter a number:");
    scanf("%d", &x);
    y=x%2;
    switch(y)
    {
        case 0:
        printf("the number is even");
        break;
        case 1:
        printf("the number is odd");
    }
    return 0;
}
