//Multiplication table from x to y
#include<stdio.h>
int main()
{
    int i,j,x,y;
    printf("Enter a range from x to y= ");
    scanf("%d%d",&x,&y);
    for(i=x;i<=y;++i)
    {
        printf("\nTable of %d",i);
        for(j=1;j<=10;++j)
            printf("\n%dx%d=%d",i,j,i*j);
    }
    return 2;
}