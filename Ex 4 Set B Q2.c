#include<stdio.h>
int main()
{
    int x,n,i,sum,j;
    printf("Enter the value of x & n= ");
    scanf("%d%d",&x,&n);
    for(i=1,j=1;i<=n;i++,j=j+2)
    {
        sum=sum+j*x;
    }
    printf("Sum=%d",sum);
    return 1;
}