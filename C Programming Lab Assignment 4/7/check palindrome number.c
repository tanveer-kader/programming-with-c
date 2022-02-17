#include <stdio.h>
int main()
{
    int x,s,r,n;
    printf("Enter a number:");
    scanf("%d",&x);
    n=x;
    for(s=0;x!=0;){
        r=x%10;
        x=x/10;
        s=s*10+r;
    }
    printf("reversed: %d\n",s);
    if(s==n){
        printf("%d is palindrome",n);
    }
    else{
        printf("%d is not palindrome",n);
    }
    return 0;
}
