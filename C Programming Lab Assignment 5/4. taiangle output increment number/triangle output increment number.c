#include<stdio.h>

int main()
{
    int i,j,n,temp,p=1;
    scanf("%d",&n);
    temp=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<temp;j++)
            printf(" ");
        for(j=1;j<=i;j++)
            {printf("%d ",p);
            p++;}
        temp--;
        printf("\n");
    }/*
    temp=1;p=1;
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=temp;j++)
            printf(" ");
        for(j=1;j<=i;j++)
            {printf("%d ",p);
            p++;}
        temp++;
        printf("\n");
    }*/
    return 0;
}

