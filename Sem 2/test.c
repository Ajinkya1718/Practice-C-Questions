/*# include <stdio.h>
int main ()
{
struct rectangle
{
int rollno;
char name [10];
} R1, * P, R [5];
printf("The size of Rectangle is : %d %d %d\n", sizeof (R1),
sizeof (P), sizeof (R) );
}
*/
/*char* reverse(char *s)
{
	char rs[20],*p1,*p2; 
	int i,j=0,len;
	p1=s; p2=rs;
	len=strlen(p1); 
	for(i=len-1;i>=0;i--)
	{
		p2[j++]=p1[i];
	}
	p2[j]='\0';
	return p2;
}
*/

#include<stdio.h>
int main()
{
	int a=10,*p=&a;
	*p=20;
	printf("Enter the Value of pointer:");
	printf("Pointer=%d",*p);
}