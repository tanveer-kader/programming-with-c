#include <stdio.h>
int main()
{
    char c;
    printf("Enter the first letter:");
    scanf("%c", &c);
    switch(c)
    {
    case 'M':
        printf("Gender: Male");
        break;
    case 'm':
        printf("Gender: Male");
        break;
    case 'F':
        printf("Gender: Female");
        break;
    case 'f':
        printf("Gender: Female");
        break;
    }
    return 0;
}
