/*WAP to accept a matrix of size 3x3 & print transpose of the matrix using pointer*/
#include<stdio.h>
#include<stdlib.h>
void memory(int **a,int r,int c)
{
    for(int i=0;i<r;i++)
        a[i]=(int *)calloc(c,sizeof(int));
}
int main()
{
    int **a,**b,i,j,r,c;
    printf("Enter the rows & columns of matrix:");
    scanf("%d%d",&r,&c);
    a=(int **)calloc(r,sizeof(int *));
    b=(int **)calloc(c,sizeof(int *));
    for(i=0;i<r;i++)
        a[i]=(int *)calloc(c,sizeof(int));
    for(j=0;j<c;j++)
        b[j]=(int *)calloc(r,sizeof(int));
    printf("Enter the elements in matrix:");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    printf("\nPrinting the Matrix:\n");
    for(i=0;i<r;i++)
    {   
        for(j=0;j<c;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    printf("\nTranspose of Matrix:\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            b[j][i]=a[i][j];        
    }
    printf("\n%d%d\n",i,j);
    for(i=0;i<c;i++)
    {   
        for(j=0;j<r;j++)
            printf("%d ",b[i][j]);
        printf("\n");
    }
    for(i=0;i<r;i++)
        free(a[i]);
    for(i=0;i<c;i++)
        free(b[i]);
    free(a);
    free(b);

    return 1;
}