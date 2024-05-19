#include<stdio.h>
int main()
{
	int i,sum=0,x,n;
	printf("ENter the value of n= ");
	scanf("%d",&n);
	printf("Enter the value of x= ");
	scanf("%d",&x);
	for(i=1;i<=n;i++)
	{
		sum=sum+(x-i);
	}
	printf("Sum=%d",sum);
	return 1;
}
