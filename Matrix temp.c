#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,**a,**b,r,c;
    printf("Enter no. of rows & columns:");
    scanf("%d%d",&r,&c);
    a=(int **)calloc(r,sizeof(int*));
    b=(int **)calloc(c,sizeof(int *));

    for(i=0;i<r;i++)
        a[i]=(int *)calloc(c,sizeof(int)); // try sizeof(int *) if incompatible output

    for(j=0;j<c;j++)
        b[j]=(int *)calloc(r,sizeof(int)); 

    printf("Scaning Matrix A\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }

    printf("Printing Matrix A\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }

    printf("Transposing Martix A\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            b[j][i] = a[i][j];
    }

    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
            printf("%d ",b[i][j]);
        printf("\n");
    }

    for(i=0;i<c;i++)
        free(a[i]);
    free(a);
    for(i=0;i<r;i++)
        free(b[i]);
    free(b);
    return 1;
}