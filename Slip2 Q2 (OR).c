#include<stdio.h>
int main()
{
	int a[50],i=0,n,j;
	printf("Enter the decimal no= ");
	scanf("%d",&n);
	while(n>0)
	{
		a[50]=n%2;
		n=n/2;
		i++;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%d",a[j]);
	}
	return 1;
}
