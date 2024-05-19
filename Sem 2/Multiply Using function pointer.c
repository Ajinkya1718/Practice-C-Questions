/*WAP to multiply two numbers using function pointer. */
#include<stdio.h>
void Multiply(int a,int b)
{
    printf("\nMultiplication=%d",a*b);
}
void (*Mul)(int a,int b)=Multiply;
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    Mul(a,b);
}