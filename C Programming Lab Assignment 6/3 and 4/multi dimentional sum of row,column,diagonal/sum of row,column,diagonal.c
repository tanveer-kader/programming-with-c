#include <stdio.h>
int main()
{
    int a[50][50],sum,n,i,j;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }}
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++){
            sum=0;
        for(j=0;j<n;j++){
            sum=sum+a[i][j];
        }
        printf("sum of row %d:%d\n",i+1,sum);
    }
    for(i=0;i<n;i++){
            sum=0;
        for(j=0;j<n;j++){
            sum=sum+a[j][i];
        }
        printf("sum of column%d:%d\n",i+1,sum);
    }
    sum=0;
    for(i=0;i<n;i++){
        for(j=i;j<=i;j++){
            sum=sum+a[i][i];
        }}
    printf("diagonal=%d",sum);

 return 0;
}
