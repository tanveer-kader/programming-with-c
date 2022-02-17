#include <stdio.h>
int main()
{
    int arr[50],i,n,location,number;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the insertion number:");
    scanf("%d", &number);
    printf("Enter the location:");
    scanf("%d", &location);
    for(i=n;i>=location;i--){
        arr[i]=arr[i-1];
    }
    n++;
    arr[location-1]=number;
    for(i=0;i<n;i++){
        printf("%d", arr[i]);
    }
    return 0;
}
