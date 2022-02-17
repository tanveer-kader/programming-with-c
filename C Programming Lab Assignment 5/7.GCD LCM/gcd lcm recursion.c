#include <stdio.h>
int main()
{
    int a,b,GCD,LCM;
    scanf("%d%d", &a,&b);
    GCD=gcd(a,b);
    LCM=lcm(a,b,GCD);
    printf("GCD=%d",GCD);
    printf("LCM=%d",LCM);
}
int gcd(int x,int y)
{
    if(y==0){
        return x;
    }
    else
        return gcd(y,x%y);
}
int lcm(int x,int y,int GCD)
{
    return (x*y)/GCD;
}
