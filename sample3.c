#include<stdio.h>
int main()
{
    int i,j,n;
    char a='A';
    printf("Enter the no. of rows= ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }
    return 1;
}