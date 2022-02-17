#include <stdio.h>
int main()
{
    double a,b,c;
        printf("Find a Equilateral Isosceles Scalene triangle\n");
        printf("Enter the scales of the triangle:");
        scanf("%lf %lf %lf", &a, &b, &c);
    if(a+b>c && b+c>a && c+a>b){
        if(a==b && b==c){
            printf("This is a Equilateral triangle");
        }
        else if(a==b || b==c || c==a){
            printf("This is a Isosceles triangle");
        }
        else{
            printf("This is a Scalene triangle");
        }
    }
    else{
        printf("The triangle is not valid");
    }
    return 0;
}
