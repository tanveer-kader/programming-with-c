#include<stdio.h>
int swap(int *x,int *y)
{
    int temp;
    temp=*y;
    *y=*x;
    *x=temp;
    printf("After swaping A=%d\nB=%d",*x,*y);
}
int main()
{
    int a,b;
    printf("Enter the value of a and b:\n");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    return 0;
}
