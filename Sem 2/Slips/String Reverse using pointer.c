#include<stdio.h>
void reverse(char *s)
{
    int n;
    n=printf("%s",s);
    char *b=s,*e=s+n-1;
    for(int i=0;i<n/2;i++,b++,e--)
    {
        char t=*b;
        *b=*e;
        *e=t;
    }
    printf("\nReversed String:%s",s);

}
int main()
{
    char s[20];
    printf("Enter the String:");
    scanf("%s",s);
    reverse(s);
}