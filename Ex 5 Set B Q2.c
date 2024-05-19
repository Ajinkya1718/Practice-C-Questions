#include<stdio.h>
int main()
{
    int n,ln=0,cl=0,l;
    char c;
    printf("Enter a line= ");
    while((c=getchar())!=EOF)
    {
        if(c=='\n')
        {
            l++;
            if(cl>ln)
                ln=cl;
            cl=0;    
        }
        else
        {
            cl++;
        }
    }
    printf("\nNo. of lines= %d",l);
    printf("\nLength of longest line= %d",ln);
    return 1;
}