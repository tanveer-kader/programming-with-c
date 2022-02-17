#include <stdio.h>
int main()
{
    double x;
        printf("Check a Number is ZERO or NEGATIVE or POSITIVE\n");
        printf("Enter a number:");
        scanf("%lf", &x);
    if(x==0){
        printf("RESULT: The number is ZERO");
    }
    else if(x>0){
        printf("RESULT: The number is POSITIVE");
    }
    else{
        printf("RESULT: The number is NEGATIVE");
    }
    return 0;
}
