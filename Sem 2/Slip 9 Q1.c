/*WAP to find minimum of three numbers using nested macros. */
#include<stdio.h>
#define min(x,y) (x)<(y)?(x):(y)
#define Min(x,y,z) min(min((x),(y)),(z))
int main()
{
    int a,b,c;
    printf("Enter three Numbers:");
    scanf("%d%d%d",&a,&b,&c);
    printf("Minimum of 3 Numbers:%d",Min(a,b,c));
}