#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];
    printf("Enter two strings:");
    fgets(s1,20,stdin);
    fgets(s2,20,stdin);
    printf("\nLength of 1st String:%lld"
            "\nLength of 2nd String:%lld",strlen(s1),strlen(s2));
    if(strcmp(s1,s2)==0)
        printf("\nBoth the String are Same");
    else if(strcmp(s1,s2)<0)
        printf("\n%s is less than %s",s1,s2);
    else    
    printf("\n%s is less than %s",s2,s1);
}