#include <stdio.h>
int main()
{
    int a[50][50],b[50][50],n,i,j;
    printf("Enter type of matrix:");
    scanf("%d",&n);
    printf("Enter entities of matrix A:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        scanf("%d", &a[i][j]);
    }}
    printf("Enter entities of matrix B:\n");
    for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        scanf("%d", &b[i][j]);
        }}
    printf("Ans:\n");
    for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        printf("%d ", a[i][j]+b[i][j]);
        }
    printf("\n");
    }
    return 0;
}
