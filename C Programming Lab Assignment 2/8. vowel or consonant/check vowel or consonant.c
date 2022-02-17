#include <stdio.h>
int main()
{
    char x;
        printf("Check a letter is VOWEL or CONSONANT\n");
        printf("Enter a letter:");
        scanf("%c", &x);
    if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u'
       ||x=='A' || x=='E' || x=='I' || x=='O' || x=='U')
        printf("RESULT: %c is a VOWEL", x);
    else
        printf("RESULT: %c is a consonant", x);
    return 0;

}
