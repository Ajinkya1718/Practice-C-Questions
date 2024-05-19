#include<stdio.h>
int mysum(int n)
{
    if(n==1)
        return 1;
    else
        return n+mysum(n-1); 
}

int main()
{
    int n;
    printf("Enter a digit= ");
    scanf("%d",&n);
    printf("Sum= %d",mysum(n));
    return 1;
}