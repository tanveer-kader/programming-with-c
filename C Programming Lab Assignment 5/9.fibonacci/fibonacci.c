#include <stdio.h>
int fibo(int i);
int main()
{
    int n,i;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("%d\n", fibo(i));
    }
}
int fibo(i)
{
    if(i==0){
        return 0;
    }
    else if(i==1){
        return 1;
    }
    else
        return fibo(i-1)+fibo(i-2);
}
