#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
	char c;
	int ch;
	while(1)
	{
		printf("\nEnter the character= ");
		scanf("%c",&c);
		printf("\n1.)Convert to Uppercase");
		printf("\n2.)Convert to Lowercase");
		printf("\n3.)Exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:	
					printf("%c",toupper(c));	
				break;
			case 2:
					printf("%c",tolower(c));	
				break;
			case 3:
				exit(1);				
		}	
	}
	return 1;
}

