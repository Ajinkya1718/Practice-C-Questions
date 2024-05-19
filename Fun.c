#include<stdio.h>
void accept(int a[50],int l)
{	
	for(int i=0;i<l;i++)
	{
		printf("Enter value of a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}

void display(int a[50],int l)
{
	for(int i=0;i<l;i++)
	printf("\na[%d]=%d",i,a[i]);
}

int sum(int a[20],int l)
{
	int s=0;
	for(int i=0;i<l;i++)
		s+=a[i];
	return s;
}	

void average(int a[20],int l)
{
	int s=sum(a,l);
	printf("\nAverage= %d",s/l);
}

void LS(int a[50],int l)
{
	int L,S;
	L=a[0];
	S=a[0];
	for(int i=0;i<l;i++)
	{
		if(a[i]>L)
			L=a[i];
		if(a[i]<S)
			S=a[i];
	}
	printf("\nLargest=%d"
			"\nSmallest=%d",L,S);
}

void reverse(int a[50],int l)
{
	printf("Reverse:");
	for(int i=l;i>=0;i--)
		printf(" %d",a[i]);
}	
		
void search(int a[50],int l)
{
	int f,k;
	printf("Enter the element to search: ");
	scanf("%d",&k);
	for(int i=0;i<l;i++)
		if(k==a[i])
			printf("\nFound at a[%d]",i);
		
}
		
