#include<stdio.h>
int main()
{
    int a,d;
    char c;
    printf("Enter a Character (Press Ctrl+Z tp stop)= ");
    while((c=getchar())!=EOF)
    {
        if((c>='A'&& c<='Z') || (c>='a' && c<='z'))
            a++;
        if(c>='0' && c<='9')
            d++;            
    }
    printf("\nNo. of Alphabets= %d",a);
    printf("\nNo. of Digits= %d",d);
    return 1;
}