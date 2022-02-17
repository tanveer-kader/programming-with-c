#include <stdio.h>
int main()
{
    int x,y,m;
    scanf("%d%d",&x,&y);
    m=x>>y;
    printf("%d\n", m);
    return 0;
}
