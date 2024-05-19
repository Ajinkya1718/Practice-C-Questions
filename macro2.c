#include<stdio.h>
#define Square(x) x*x
#define Cube(x) Square(x)*x
int main()
{
    int a=2;
    printf("Cube=%d",Cube(a));
}