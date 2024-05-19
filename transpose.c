#include<stdio.h>
#include<stdlib.h>
void accept(int a[3][3],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
}
int main()
{
    int i,j,a[3][3],b[3][3],r,c;
    printf("Enter no. of rows & columns:");
    scanf("%d%d",&r,&c);
    accept(a,r,c);

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            b[i][j]=a[j][i];
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",b[i][j]);
        printf("\n");
    }
    return 1;
}