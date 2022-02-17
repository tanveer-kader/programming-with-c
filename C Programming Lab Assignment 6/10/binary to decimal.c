#include <stdio.h>
int btod(int n);
int main()
{
    int binary;
    scanf("%d", &binary);
    printf("%d", btod(binary));
    return 0;
}
int btod(int n)
{
    int r,decimal=0,i=0;
    while(n!=0){
        r=n%10;
        n=n/10;
        decimal=decimal+(r*pow(2,i));
        i++;
    }
    return decimal;
}
