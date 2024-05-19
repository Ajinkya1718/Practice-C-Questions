#include<stdio.h>
char character(char c,int n)
{
    for(int i=1;i<=n;i++)
    {
        c++;
        printf("%c",c);
    }
    return 1;
}

int main()
{
    char c;
    int n;
    printf("Enter a character & an number= ");
    scanf("%c%d",&c,&n);
    character(c,n);
    return 1;
}