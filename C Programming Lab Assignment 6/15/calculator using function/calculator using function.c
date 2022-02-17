#include <stdio.h>
int add(int x,int y)
    {
        return x+y;
    }
int sub(int x,int y)
    {
        return x-y;
    }
int multi(int x,int y)
    {
        return x*y;
    }
int div(int x,int y)
    {
        return x/y;
    }
int fact(int x)
    {
        int i,f;
        for(i=1,f=1;i<=x;i++){
            f=f*i;
        }
        return f;
    }
int topow(int x,int y)
    {
        /*int i,p;
        for(p=1,i=1;i<=y;i++){
            p=p*x;
        }
        return p;*/
        int p;
        p=pow(x,y);
        return p;
    }
int prcnt(int x,int y)
    {
        int p;
        p=(x*y)/100;
        return p;
    }
int main()
{
    int a,b,r,x,y;
    char o;
    printf("Enter the operator:\n");
    scanf("%c", &o);
    switch(o)
    {
    case '+':
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    r=add(a,b);
    printf("%d %c %d=%d",a,o,b,r);
    break;
    case '-':
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    r=sub(a,b);
    printf("%d %c %d=%d",a,o,b,r);
    break;
    case '*':
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    r=multi(a,b);
    printf("%d %c %d=%d",a,o,b,r);
    break;
    case '/':
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    r=div(a,b);
    printf("%d %c %d=%d",a,o,b,r);
    break;
    case '!':
    printf("\nEnter a number:");
    scanf("%d",&a);
    r=fact(a);
    printf("%d%c=%d",a,o,r);
    break;
    case '^':
    printf("\nEnter a number:");
    scanf("%d%d",&a,&b);
    r=topow(a,b);
    printf("%d%c%d=%d",a,o,b,r);
    break;
    case '%':
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    r=prcnt(a,b);
    printf("%d%c of %d=%d",b,o,a,r);
    break;
    }
    return 0;
}
