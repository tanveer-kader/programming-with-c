#include <stdio.h>
int main()
{
    char country[26];
    int i,length;
    gets(country);
    length=strlen(country);

    for(i=0;i<length;i++){
        if(country[i]>=97 && country[i]<=122){
            country[i]='A'+(country[i]-'a');
        }
    }
    printf("%s\n", country);
    return 0;
}
