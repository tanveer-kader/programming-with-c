/*summation of odd numbers in a given range*/
#include <stdio.h>
int main()
{
    int x,y,s=0,i;
    printf("*Calculate the sum of odd number*\n");
    printf("Enter a range:");
    scanf("%d %d",&x,&y);
    if(x%2!=0){
        for(i=x;i<=y;i+=2){
            s=s+i;
        }
        printf("The sum of odd numbers in given range is :%d",s);
    }
    else{
        x=x+1;
        for(i=x;i<=y;i+=2){
            s=s+i;
        }
        printf("The sum of odd numbers in given range is:%d",s);
    }
    return 0;
}
