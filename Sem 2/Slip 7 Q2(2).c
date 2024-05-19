/*WAP to accept a matrix of size 3x3 & print the same using pointer*/
#include<stdio.h>
#include<stdlib.h>
void accept(int **a)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            scanf("%d",a[i]+j);
    }
}
int main()
{
    int **a,i;
    printf("Enter the Array elements:");
    a=(int **)malloc(3*sizeof(int *));
    for(i=0;i<3;i++)
        a[i]=(int *)malloc(3*sizeof(int));
    accept(a);
    for(i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            printf("%d ",*(a[i]+j));
        printf("\n");
    }
    for(i=0;i<3;i++)
        free(a[i]);
    free(a);
}