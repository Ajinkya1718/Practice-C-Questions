/*Write a function to copy one string into another string &
reverse the string without using pre-defined functions*/
#include<stdio.h>
void concat(char *s1,char *s2)
{
    int i,j;
    for(i=0;s1[i]!='\0';i++); 
    for(j=0;s2[j]!='\0';j++); 
    for(int k=0;k<j;k++,i++) 
        s1[i]=s2[k];
    s1[i]='\0';  
    printf("\n%s",s1);
}
int main()
{
    char s1[50],s2[50],*start,*end;
    int i,l;
    printf("Enter 1st String:");
    scanf("%s",s1);
    printf("Enter 2nd String:");
    scanf("%s",s2);
    printf("\nConcatinating both Strings:");
    concat(s1,s2);
    printf("\nReverse of Concatinated String:");
    for(i=0;s1[i]!='\0';i++,l++);
    start=s1,end=s1+l-1;
    for(int i=0;i<l/2;i++,start++,end--)
    {
        char t=*start;
        *start=*end;
        *end=t;
    }
    printf("\n%s",s1);
}