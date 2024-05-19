#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(int argc,char *argv[])
{
    int i;
    for(i=1;i<argc;i++)
        if(!(isdigit(atoi(argv[i]))))
        {
            printf("Argument should be an integer only");
            exit(1);
        }
    for(i=1;i<argc;i++)
        if((atoi(argv[i]))%2==0)
            printf("\n%d is Even",atoi(argv[i]));

}