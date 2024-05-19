#include<stdio.h>
int main()
{
	int i,n,j;
	char c;
	printf("Enter the No. of rows= ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		c='A';
		for(j=1;j<=i;j++)
		{
			printf("%c",c);
			c++;
		}
		printf("\n");
	}
}
