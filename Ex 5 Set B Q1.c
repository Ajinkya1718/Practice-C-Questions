// ARmstrong No. from 1 to 500
#include<stdio.h>
int main()
{
    int i,n,sum,r;
    for(i=1;i<=500;i++)
    {
        n=i;
        sum=0;
        while(n>0)
        {
            r=n%10;
            sum=sum+(r*r*r);
            n=n/10;
        }
        if(sum==i)
            printf("\n%d",i);
    }
    return 1;
}