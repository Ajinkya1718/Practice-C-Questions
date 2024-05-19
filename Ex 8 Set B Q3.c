#include<stdio.h>
#include<math.h>
int reverse(int n)
{
    int len=log10(n);
    if(n==0)
        return 0;
    else    
        return n%10*pow(10,len)+reverse(n/10);
}
int main()
{
    int n;
    printf("Enter the number= ");
    scanf("%d",&n);
    printf("%d",reverse(n));
}