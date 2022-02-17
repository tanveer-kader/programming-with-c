#include <stdio.h>
int dtob(int n);
int main()
{
    int decimal;
    scanf("%d", &decimal);
    printf("%d", dtob(decimal));
    return 0;
}
int dtob(int n)
{
    int r,binary=0,i=1;
    while(n!=0){
        r=n%2;
        n=n/2;
        binary=binary+(r*i);
        i=i*10;
    }
    return binary;
}
