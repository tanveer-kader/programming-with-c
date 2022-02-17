 #include <stdio.h>
int main()
{
    double x,b,c,d,e;
    printf("Enter the energy in unit:");
    scanf("%lf", &x);

    if(x>=0 && x<=50){
        b=(x*0.5)*1.2;
        printf("BDT:%lf", b);
    }
    else if(x>50){
        c=x-50;
        if(c<100){
            b=(50*0.5+c*0.75)*1.2;
            printf("BDT:%lf", b);
        }
         else{
                d=c-100;
            if(d<100){
                b=(50*0.5+100*0.75+d*1.20)*1.2;
                printf("BDT:%lf", b);
            }
            else{
                e=d-100;
                b=(50*0.5+100*0.75+100*1.20+e*1.50)*1.2;
                printf("BDT:%lf", b);
            }
        }
    }

    return 0;
}
