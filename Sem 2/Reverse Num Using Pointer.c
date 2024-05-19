#include<stdio.h>
int main()
{
    int a[10],n,i,l;
    printf("Enter a Limit to Array:");
    scanf("%d",&n);
    printf("Enter the Array elements:");
    for(l=0;l<n;l++)
        scanf("%d",(a+l));
    for(i=0;i<n/2;i++,l--)
    {
        int temp=*(a+i);
        *(a+i)=*(a+(l-1));
        *(a+(l-1))=temp;
    }
    for(i=0;i<n;i++)
        printf("%d",*(a+i));
}