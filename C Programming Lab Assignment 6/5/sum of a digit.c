#include <stdio.h>
int main()
{
    int n,r,sum,i;
    scanf("%d",&n);
    for(i=1,sum=0;n!=0;i++){
        r=n%10;
        n=n/10;
        sum=sum+r;
    }
    printf("%d", sum);
    return 0;
}
