#include <stdio.h>
int main()
{
    char a[30];
    int len,i;
    printf("Enter string:");
    gets(a);
    len=strlen(a);
    for(i=0;i<len-1;i++){
        if(a[i]!=a[len-1]){
            printf("not palindrome");
        }
        len--;
    }
    printf("palindrome");

    return 0;
}
