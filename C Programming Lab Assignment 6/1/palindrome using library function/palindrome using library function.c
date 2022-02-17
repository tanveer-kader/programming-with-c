#include <stdio.h>
int main()
{
    char b[30],a[30],c[30];
    int i;
    printf("Enter a string:");
    gets(a);
    strcpy(c,a);
    strcpy(b,strrev(a));
    printf("\n\n**output**\n\n");
    i=strcmp(c,b);
    if(i==0){
        printf("%s is a palindrome string",c);
    }
    else{
        printf("%s is not a palindrome string",c);
    }
    return 0;
}
