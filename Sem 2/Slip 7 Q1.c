/*WAP to find maximum of two numbers using macros. */
#include<stdio.h>
#define max(x,y) x>y?1:0
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    if(max(a,b))
        printf("%d is Greater than %d",a,b);
    else
        printf("%d is Greater than %d",b,a);
}