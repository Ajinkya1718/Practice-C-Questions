/*WAP to convert alternate characters of string in uppercase using pointers.
*/
#include<stdio.h>
int main()
{
    char str[50],*p=str;
    int i,l;
    printf("Enter the String:");
    scanf("%s",str);
    for(l=0;str[l]!='\0';l++);
    for(i=0;i<l;i++)
    {
        if(i%2!=0)
        {
            if(p[i]>=97 && p[i]<=122)
                p[i]-=32;
        }
        else
            if(p[i]>=65 && p[i]<=90)
                p[i]+=32;        
    }
    printf("\nString=%s",p);
}