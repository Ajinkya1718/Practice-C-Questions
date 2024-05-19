#include<stdio.h>
int main()
{
    int i,sum,N,S,E,W,s,Average;
    for(i=1;i<=4;i++)
    {
        printf("\nEnter the Quater sales= ");
        scanf("%d%d%d%d",&N,&S,&E,&W);
        s=N+S+W+E;
        sum+=s;
    }
    Average=sum/4;
    printf("\nAverage= %d",Average);
    return 1;
}