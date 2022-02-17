#include <stdio.h>
int main()
{
    char x;
        printf("Check whether a character is Alphabet or Digit or Special Character\n");
        printf("Enter a character:");
        scanf("%c", &x);
    if(x>='a' && x<='z' || x>='A' && x<='Z')
        printf("RESULT: %c is an ALPHABET", x);
    else if(x>='0' && x<='9')
        printf("RESULT: %c is a DIGIT", x);
    else
        printf("RESULT: %c is a SPECIAL CHARACTER", x);
    return 0;
}
