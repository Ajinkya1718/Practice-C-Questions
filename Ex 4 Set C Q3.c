#include<stdio.h>
int main()
{
    int i,j=0,t,s;
    for(i=4;i<=13;)
    {
        j+=30;
        if(j>=30)
        {
            s++;
            j+=10;
        }            
        if(j>=60)
        {
            i++;
            if(j==60)
                j=0;
            if(j==70)
                j=j-60;
            if(j==80)
                j=j-60;
            if(j==90)
                j=j-60;
            
        }  
    }         
        printf("%d",s);
}