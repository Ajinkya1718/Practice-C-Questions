#include<stdio.h>
#include<ctype.h>
char check (char a)
{
    int f=0;
    if(isalpha(a))
        f=1;
    else if(isdigit(a))
        f=2;
    else
        if(ispunct(a))
            f=3;
    return f;            
}
int main()
{
    int f,c,d,s;
    char a;
    while((a=getchar())!=EOF)
    {
        f=check(a);
        if(f==1)
            c++;     //character ++
        else if(f==2)
            d++;     // digit ++
        else
            s++;     // special symbol ++

    }
    printf("Total No. of:-"
            "\nAlphabets=%d"
            "\nDigits=%d\n"
            "Special Symbol=%d",c,d,s-1);
}