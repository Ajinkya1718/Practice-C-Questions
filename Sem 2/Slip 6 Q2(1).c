/*WAP to count number of vowels,consonants & words in given sentence.*/
#include<stdio.h>
#include<string.h>
void count(char s[])
{
    int wc=0,c=0,v=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if((s[i]==' '||s[i+1]=='\0')&& c>0)
            wc++;
        if(s[i]=='a'||s[i]=='A'|| s[i]=='e'||s[i]=='E'
                || s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'
                || s[i]=='u'||s[i]=='U')
            v++;
        if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
            c++;
    }
    printf("\nVowel=%d"
            "\nConsonants=%d"
            "\nWords=%d",v,c,wc);
}
int main()
{
    char s[50];
    printf("Enter the String: ");
    fgets(s,50,stdin);
    count(s);
}
