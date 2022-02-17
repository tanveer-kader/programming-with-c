#include <stdio.h>
int main()
{
    int arr[50],n,i,j,search;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &search);
    for(i=0;i<n;i++){
        if(search==arr[i]){
            printf("%d is at position %d",search,i+1);
            break;
        }
        /*else if(i==n-1){
            printf("%d is not present in that array",search);
        }*/}
    if(i==n){
            printf("%d is not present in that array",search);
    }
    return 0;
}
