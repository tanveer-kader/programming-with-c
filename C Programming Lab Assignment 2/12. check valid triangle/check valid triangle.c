#include <stdio.h>
int main()
{
    double x,y,z;
        printf("Check a triangle is valid or not\n");
        printf("Enter the arms of the tringle:");
        scanf("%lf %lf %lf", &x, &y, &z);
    if(x<y+z && y<x+z && z<x+y){
        printf("RESULT: This is a valid triangle");
    }
    else{
        printf("RESULT: The triangle is not valid");
    }
    return 0;
}
