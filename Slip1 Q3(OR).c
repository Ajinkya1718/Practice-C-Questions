#include<stdio.h>
int main()
{
	int a[50][50],transpose[50][50],i,j,r,c;
	printf("No. of rows & columns= ");
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter (%d,%d)= ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
			if(j==c-1)
				printf("\n");
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			transpose[j][i]=a[i][j];
		}
	}
	printf("Transpose:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",transpose[i][j]);
			if(j==r-1)
				printf("\n");
		}
	}
	return 1;
}
