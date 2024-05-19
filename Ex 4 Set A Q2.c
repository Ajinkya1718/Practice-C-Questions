#include<stdio.h>
int main ()
{
	int x,y,i,Sum=0;
	printf("Enter the value of x & y= ");
	scanf("%d%d",&x,&y);
	for(i=x;i<=y;i++)
	{
		Sum=Sum+i;
	}
	printf("%d",Sum);
	return 1;
}
