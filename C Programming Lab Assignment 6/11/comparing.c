#include <stdio.h>
int main()
{
    char b[30],a[20];
    int i;
    printf("Enter first string:");
    gets(a);
    printf("Enter second string:");
    gets(b);
    int len1,len2;
    len1=strlen(b);
    len2=strlen(a);
    strcat(a,b);

    printf("\n***Output***\n");
    i=strcmp(a,b);
    if(i==0){
        printf("Both string are equal\n");
    }
    else if(i>0){
        printf("%s is greater than %s\n",a,b);
    }
    else{
        printf("%s is greater than %s\n",b,a);
    }
    printf("strcat= %s\n",a);
    printf("Length1=%d\n", len1);
    printf("Length2=%d\n", len2);
    printf("Total Length=%d\n",len1+len2);
    return 0;
}
