#include <stdio.h>
int main()
{
    int arr[50],n,i,j,temp;
    printf("How many numbers you want to sort:");
    scanf("%d", &n);
    printf("Enter the numbers:");
    for(i=0;i<n;i++){
       scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
    for(j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
    }}}
    printf("Sorted list(ascending):");
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
    return 0;
}
/*how does it work?? lets see: if you want to sort 5 numbers given as follows
    50,40,30,20,10;
nested loop,0-> 40 50 30 20 10 }-> 1st loop,i=0;
5-0-1=4,    1-> 40 30 50 20 10 }
4 times     2-> 40 30 20 50 10 }
            3-> 40 30 20 10 50 }

5-1-1=3,    0-> 30 40 20 10 50 }-> 1st loop,i=1;
3 times     1-> 30 20 40 10 50 }
            2-> 30 20 10 40 50 }

5-2-1=2,    0-> 20 30 10 40 50 }-> 1st loop,i=2;
2 times     1-> 20 10 30 40 50 }

5-3-1=1,    0-> 10 20 30 40 50 }-> 1st loop,i=3;
just once*/
