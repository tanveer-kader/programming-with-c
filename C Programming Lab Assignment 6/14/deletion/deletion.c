#include <stdio.h>
int main()
{
    int arr[50],i,num,position;

    printf("Enter number:");
    scanf("%d", &num);

    for(i=0;i<num;i++){
        scanf("%d", &arr[i]);
    }
    for(i=0;i<num;i++){
        printf("arr[%d]=%d",i,arr[i]);
        printf("\n");
    }
    printf("Enter the position you want to delete:");
    scanf("%d", &position);
    if(position>=num+1){
        printf("Operation failed!");
    }
    else{
        for(i=position-1;i<num-1;i++){
            arr[i]=arr[i+1];
        }
    }
    for(i=0;i<num-1;i++){
        printf("arr[%d]=%d", i, arr[i]);
        printf("\n");
    }
    return 0;
}
