#include<stdio.h>
#define Max(x,y) (x)>(y)?1:0
int main()
{
    int x,y;
    printf("Enter 2 numbers:");
    scanf("%d%d",&x,&y);
    if(Max(x,y))
        printf("Max:%d",x);
    else
        printf("Max:%d",y);
}