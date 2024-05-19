/*WAP to accept a string & a substring. Check if the substring is present in
the given string or not using. If substring is present, replace by another string ,otherwise
display appropriate message*/
#include<stdio.h>
int main()
{
    char str[50],sub[50],*p=sub,replace[50];
    int i,j,k,strlen,sublen,index,f=0;
    printf("Enter the String & Sub-String:");
    scanf("%s%s",str,sub);
    for(strlen=0;str[strlen]!='\0';strlen++);
    for(sublen=0;sub[sublen]!='\0';sublen++);
    for(i=0;i<strlen;i++)
    {
        if(str[i]==*p)
        {
            if(f==0)
            {
                index=i;
                f=1;
            }
            k++;
            p++;
        }
        else
        {
            f=0;
            k=0;
            p=sub;
        }
        if(k==sublen)
        {
            printf("Sub-String found");
            break;
        }
    }
    if(f==1)
    {
        printf("Enter the String to replace:");
        scanf("%s",replace);
        p=replace;
        for(j=0;replace[j]!='\0';j++)
            for(i=index;str[i]!='\0';i++,p++)
                str[i]=*p;
        printf("New String:%s",str);
    }
    else
        printf("\nSub-String not Found"
                "\nString:%s",str);
}
