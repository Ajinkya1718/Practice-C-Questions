#include<stdio.h>
int mypow(int x,int y)
{
    if(y==0)
        return 1;
    else
        return x*mypow(x,y-1);
}
int main()
{
    int x,y;
    printf("Enter the value of x & y= ");
    scanf("%d%d",&x,&y);
    printf("Expo= %d",mypow(x,y));
}