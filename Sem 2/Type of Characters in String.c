// Counts No. of vowels, consonant & words in a sentence
#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    int i,wc=0,v=0,c=0;
    printf("Enter the String: ");
    fgets(s,50,stdin);
    for(i=0;s[i]!='\0';i++)
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