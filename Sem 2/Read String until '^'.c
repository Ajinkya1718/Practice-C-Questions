/*WAP to read the string until the given character is ‘^’. Display the string. Also
count the vowels in it. */
#include<stdio.h>
int main()
{
    char str[50],ch;
    int i=0,vc=0;
    printf("\nEnter a String:");
    do
    {   
        scanf("%c",&ch);
        str[i]=ch;
        i++;
    }
    while(ch!='^');
    str[i]='\0';
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||
            str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||
            str[i]=='u'||str[i]=='U')
            vc++;
    }
    i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    printf("\nTotal no.of Vowels:%d",vc);
}