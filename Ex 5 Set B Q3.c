#include<stdio.h>
int main()
{
    int i,j,sum;
    for(i=1;i<500;i++)
    {
        sum=0;
        for(j=1;j<i;j++)
        {    
            if(i%j==0) 
                sum+=j;        
        }
        if(sum==i)
            printf("\n%d",i);    
    }
    
}