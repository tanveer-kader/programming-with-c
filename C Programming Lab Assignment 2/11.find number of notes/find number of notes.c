#include <stdio.h>
int main()
{
    int amount,r,r2,r3,n,n2,n3;
        printf("Find total number of notes\n");
        printf("Enter an amount:");
        scanf("%d", &amount);
    if(amount>1000)
    {
        r=amount%1000;
        if(r==0)
        {
            n=amount/1000;
            printf("notes: %d", n);
        }
        else
        {
          r2=r%500;
          if(r2==0)
          {
            n2=r/500;
            printf("notes: %d", n+n2);
          }
          else
          {
            r3=r2%100;
            if(r3==0)
            {
                n3=r2/100;
                printf("notes: %d", r+r2+r3);
            }
            else
            {

            }
          }
        }
    }

}
