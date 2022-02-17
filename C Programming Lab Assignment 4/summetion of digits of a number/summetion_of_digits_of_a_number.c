#include <stdio.h>
int main()
{
    int n,r,s;
    printf("Enter a number:");
    scanf("%d", &n);
    for(s=0;n!=0;){
        r=n%10;
        n=n/10;
        s=s+r;
    }
    printf("%d\n", s);
    return 0;
}
