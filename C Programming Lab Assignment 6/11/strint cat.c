#include <stdio.h>
int main()
{
    char b[30],a[20],c[20];
    int d,e,f;
    printf("Enter the first string:");
    gets(a);
    printf("Enter the second string:");
    gets(b);
    int len;
    printf("***output***\n");

    strcpy(c,a);
    printf("strcpy= %s\n",c);

    strcat(a,b);
    printf("strcat= %s\n",a);
    d=strlen(a);
    e=strlen(b);
    printf("String length= %d %d\n", d,e);
    return 0;
}
