#include<stdio.h>
int dsum(int n)
{
    if(n<=9)
        return n;
    else    
        return n%10+dsum(n/10);
}
int main()
{
    int n,s;
    printf("Enter the value of n= ");
    scanf("%d",&n);
    s=dsum(n);
    printf("Sum= %d-->%d-->%d",n,s,dsum(s));
}