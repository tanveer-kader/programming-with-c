#include <stdio.h>
int main()
{
    int x;
        printf("Find the days in a month\n");
        printf("Enter a month number:");
        scanf("%d", &x);
    if(x==2)
        printf("There are 28 days in that month");
    else if(x==4 || x==6 || x==9 || x==11)
        printf("There are 30 days in that month");
    else
        printf("There are 31 days in that month");
    return 0;

}
