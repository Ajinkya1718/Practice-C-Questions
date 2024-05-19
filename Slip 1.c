#include<stdio.h>
int main()
{
	char a;
	printf("Enter a Character= ");
	scanf("%c",&a);
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
		printf("It is a Vowel");
	else
		printf("Its a consonant");
	return 1;	
}
