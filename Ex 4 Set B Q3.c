#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    float sum,p,x;
    printf("Enter the value of x & n= ");
    scanf("%f%d",&x,&n);
    for(i=1;i<=n;i++)
    {
        p=i/pow(x,i);
        sum=sum+p;  
    }
    printf("Sum=%f",sum);
    return 1; 
}

