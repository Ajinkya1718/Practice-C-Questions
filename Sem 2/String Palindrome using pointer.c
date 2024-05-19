/*WAP to check given string is palindrome or not using user defined
function & pointers. */
#include<stdio.h>
int palindrome(char *str,int len)
{
    for(int i=0;i<len;i++,len--)
        if(str[i]!=str[len-1])
            return 0;
    return 1;
}
int main()
{
    char string[20],*p=string;
    int i;
    printf("\nEnter the String= ");
    scanf("%s",string);
    for(i=0;string[i]!='\0';i++); // Used to count length of string 
    if(palindrome(p,i))
        printf("String is Palindrome");
    else    
        printf("String is not Palindrome");
}