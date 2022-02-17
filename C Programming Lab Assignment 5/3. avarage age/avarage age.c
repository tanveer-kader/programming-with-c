#include <stdio.h>
void display(int age[],int n);
int main()
{
    int age[10],n,i,j;
    printf("How many person are there?:");
    scanf("%d", &n);
    printf("Enter their ages:");
    for(i=0;i<n;i++){
        scanf("%d", &age[i]);
    }
    display(age,n);
}
void display(int age[],int n)
{
    int sum,i;
    float avg;
    for(i=0,sum=0;i<n;i++){
        sum=sum+age[i];
    }
    avg=sum/n;
    printf("Their total age:%d", sum);
    printf("Their average age:%0.2f", avg);
}
