#include<stdio.h>
#include<math.h>
int main()
{
    int a,r,c,sum=0;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    c=a;
    while(r!=0)
    {
        r=a%10;
        a=a/10;
        sum+=pow(r,3);
    }
    if(c==sum)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");
    return 0;
}
