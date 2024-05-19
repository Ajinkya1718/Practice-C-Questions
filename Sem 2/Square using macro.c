/*WAP to find square of number using macro. */
#include<stdio.h>
#define Square(x) x*x 
int main()
{
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    printf("Square of %d=%d",n,Square(n));
}