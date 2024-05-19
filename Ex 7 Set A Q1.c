#include<stdio.h>
int isEven(int n)
{
    if(n%2==0)
        return 1;
    else 
        return 0;    
}
int main()
{
    int a=1,i;
    printf("Enter the numbers= ");
    while(a!=0)
    {
        scanf("\n%d",&a);
        if(a!=0)
        {
            if(isEven(a))
                printf("%d is Even",a);
            else
                printf("%d is Odd",a);    
        }    
    }
    return 1;
}