#include<stdio.h>
#include<ctype.h>
int main()
{
    char c;
    printf("Enter a character= ");
    scanf("%c",&c);
    if(isalpha(c))
    {
        printf("Its a Alphabet");
        if(isupper(c))
            printf("\n%c in lowercase= %c",c,tolower(c));
        else
            printf("\n%c in uppercase= %c",c,toupper(c));    
    }
    else if(isdigit(c))
        printf("Its a Digit");
    else
        if(ispunct(c))
            printf("Its a Punctuation");
    return 1;            
}