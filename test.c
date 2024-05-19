#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char s[50],w[50],line[20][20];
    int i=0,j=0,k=0,l,f;
    printf("Enter a String:");
    fgets(s,sizeof(s),stdin);
    printf("Enter a Word to remove:");
    scanf("%s",w);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        {
            line[k][j]='\0';
            k++;
            j=0;
        }
        else
        {
            line[k][j]=s[i];
            j++;
        }
    }
    line[k][j]='\0';
    j=0;
    for(i=0;i<=k;i++)
    {    if(strcmp(line[i],w)==0)
            line[i][j]='\0';
    }
    j=0;

    for(i=0;i<=k;i++)
    {
        if(line[i][j]!='\0')
            continue;
        else
            printf("%s ",line[i]);
    }
    printf("\n");
    
    return 1;
}