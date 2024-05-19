/*WAP to accept an array & a number. Check whether the number is present in
the array, print the index number of the all occurrence of that number*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,*a,n,s,f=0;
    printf("Enter total Array elements:");
    scanf("%d",&s);
    a=(int *)malloc(s*sizeof(int));
    printf("Enter the Array Elements:");
    for(i=0;i<s;i++)
        scanf("%d",a+i);
    printf("Enter a Number:");
    scanf("%d",&n);
    for(i=0;i<s;i++)
        if(a[i]==n)
        {
            printf("%d is present at %d index",n,i);
            f=1;
        }
    if(f==0)
        printf("No. is not present");
    free(a);
}