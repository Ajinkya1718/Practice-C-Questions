/* To display
A B C D
E F G
H I
J
*/
#include<stdio.h>
int main()
{
    int n,i,j;
    char a='A';
    printf("Enter value of n= ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }
    return 1;
}