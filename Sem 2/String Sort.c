//Bubble Sort
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char a[10][10],t[50];
    int i,j,n;
    printf("Enter total words:");
    scanf("%d",&n);
    printf("Enter the String Max:");
    for(i=0;i<n;i++)
        scanf("%s",a[i]);
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
            if(strcasecmp(a[j],a[j+1])>0) // use strcpy if needed
            {
                printf("Working\n");
                strncpy(t,a[j],strlen(a[j]));
                strncpy(a[j],a[j+1],strlen(a[j+1]));
                strncpy(a[j+1],t,strlen(t));
            }
            if(a[i][0]>=97 && a[i][0]<=122)
                a[i][0]-=32;
    }
    printf("\nOutput:");
    for(i=0;i<n;i++)
        printf("\n%s",a[i]);
}
