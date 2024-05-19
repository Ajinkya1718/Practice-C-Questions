#include<stdio.h>
#include<string.h>
/*int main()
{
    int *p,(*ptr)[10],a[10];
    p=a;
    ptr=&a;
    for(int i=0;i<5;i++)
       scanf("%d",&a[i]);
    for (int i=0;i<5;i++,++p,ptr++)    
        printf("\np=%d ptr=%u",*p,*ptr[i]);
}

*/
/*int main()
{
    int x=5,y;
    y=x++;
    printf("\nPost Increment Operator:");
        printf("\n%d",y);
    printf("\nPre Increment Operator:");
    y=++x;
        printf("\n%d",y);
}
*/

int main()
{
	// Declaration of string
	char gfg[100] = " Geeks - for - geeks - Contribute";

	// Declaration of delimiter
	const char s[4] = "-";
	char* tok;

	// Use of strtok
	// get first token
	tok = strtok(gfg, s);

	// Checks for delimiter
	while (tok != 0) {
		printf(" %s\n", tok);

		// Use of strtok
		// go through other tokens
		tok = strtok(0, s);
	}

	return (0);

}