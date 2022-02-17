#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter Number:");
    scanf("%d", &x);
    y=x/10;
    switch(y)
    {
    case 1:
        printf("Grade: F");
        break;
    case 2:
        printf("Grade: F");
        break;
    case 3:
        printf("Grade: D");
        break;
    case 4:
        printf("Grade: C");
        break;
    case 5:
        printf("Grade: B");
        break;
    case 6:
        printf("Grade: A-");
        break;
    case 7:
        printf("Grade: A");
        break;
    case 8:
        printf("Grade: A+");
        break;
    case 9:
        printf("Grade: A+");
        break;
    case 10:
        printf("Grade: A+");
        break;
    default:
        printf("Invalid");
        break;
    }
    return 0;
}
