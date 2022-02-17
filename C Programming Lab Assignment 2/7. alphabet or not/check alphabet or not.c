#include <stdio.h>
int main()
{
    char x;
        printf("Check a character is ALPHABET or not\n");
        printf("Enter a character:");
        scanf("%c", &x);
    if(x>='a' && x<='z' || x>='A' && x<='Z')
        printf("RESULT: %c is an ALPHABET", x);
    else
        printf("RESULT: %c is not an ALPHABET", x);
    return 0;
}
