/*WAP to sort n strings in descending order*/
#include<stdio.h>
#include<string.h>
int main()
{
    char  str[50][50],t[50];
    int i,j,n;
    printf("\nEnter total no. of Strings:");
    scanf("%d",&n);
    printf("\nEnter the String:");
    for(i=0;i<n;i++)
        scanf("%s",str[i]);
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
            if(strcasecmp(str[j],str[j+1])<0)
            {
                /*strcpy(t,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],t);*/
            }
    }
    printf("\nDisplaying Sorted String:\n");
    for(i=0;i<n;i++)
    {
        if(str[i][0]>=97 && str[i][0]<=122)
            str[i][0]-=32;
        puts(str[i]);
    }
}