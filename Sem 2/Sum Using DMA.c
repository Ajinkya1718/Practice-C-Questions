#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a,i,n,sum=0;
    printf("\nEnter the total no. of numbers:");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    printf("\nEnter the numbers:-");
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
        sum+=*(a+i);
    }
    printf("\nSum of %d numbers:%d",n,sum);
    free(a);
}
