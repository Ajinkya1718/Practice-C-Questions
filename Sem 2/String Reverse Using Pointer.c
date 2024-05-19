#include<stdio.h>
void reverse(char *s,int l)
{
    char *start=s,*end=s+l-1;
    for(int i=0;i<l/2;i++,start++,end--)
    {
        int temp=*start;
        *start=*end;
        *end=temp;
    }
    printf("%s",s);
}
int main()
{
    char s[10];
    int i;
    printf("Enter the String:");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++);
    reverse(s,i);
}