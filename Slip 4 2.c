#include<stdio.h>
int main()
{
	int a[20],b[20],s1,s2,i,j;
	printf("Enter size of 1st array= ");
	scanf("%d",&s1);
	printf("Enter the data of 1st array= ");
	for(i=0;i<s1;i++)
		scanf("%d",&a[i]);
	
	printf("Enter size of 2nd array= ");
	scanf("%d",&s2);
	printf("Enter the data of 2nd array= ");
	for(j=0;j<s2;j++)
		scanf("%d",&b[j]);
	
	for(i=0;i<s1;i++)
	{
		for(j=0;j<s2;j++)
		{
			if(a[i]==b[j])
				printf("%d",a[i]);
		}
	}
	return 1;	
}
