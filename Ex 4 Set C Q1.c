#include<stdio.h>
int main()
{
    char c[100],w=0,l=0,ch=0;
    while (1)
    {
        l++;
        printf("Enter a Character/Word= ");
        scanf("%s",&c);
        if (c[0]=='*')
            break;
        
        for(int i=1;i<=100;i++)
        {
            ch++;
            if(c[i]=='\0')
            {
                w++;
                break;
            }    
        }
    }

    printf("\nNo. of lines= %d",l);
    printf("\nNo. of words= %d",w);
    printf("\nNo . of characters= %d",ch);
    return 1;
    
}