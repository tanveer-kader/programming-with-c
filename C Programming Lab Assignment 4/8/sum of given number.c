#include <stdio.h>
int main()
{
    int x,s,r;
    printf("Enter a number:");
    scanf("%d",&x);
    for(s=0;x!=0;){
        r=x%10;
        x=x/10;
        s=s+r;
    }
    printf("%d",s);
    return 0;
}

