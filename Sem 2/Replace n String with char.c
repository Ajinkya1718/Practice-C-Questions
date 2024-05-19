/*WAP to replace first n characters of string by ‘*’ using pointers & user defined
function*/
#include<stdio.h>
void replace(char *p,int n)
{
    for(int i=0;*p!='\0' && i<n;i++,p++)
        *p='*';
}

int main()
{
    char str[50];
    int n;
    printf("\nEnter the String:");
    scanf("%s",str);
    printf("\nEnter no. of char to replace by '*':");
    scanf("%d",&n);
    replace(str,n);
    printf("\nPrinting the new String:%s",str);
}
