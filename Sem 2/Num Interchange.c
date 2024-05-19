#include<stdio.h>
int main()
{
    int a,b,*p1,*p2,t;
    printf("\nEnter 2 Numbers:");
    scanf("%d%d",&a,&b);
    printf("\nBefore swapping a=%d & b=%d",a,b);
    p1=&a;
    p2=&b;
    t=*p1;
    *p1=*p2;
    *p2=t;
    printf("\nAfter Swapping a=%d & b=%d",a,b);
}