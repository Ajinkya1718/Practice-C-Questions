#include<stdio.h>
#define Max(x,y) (x>y?x:y)
int main()
{
    int x,y;
    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);
    printf("Maximum=%d",Max(x,y));
}