#include <stdio.h>
int isPrime(int n)
{
    int j,f=1;
    for(j=2; j<= n/2; ++j)
    {
        if (n%j == 0)
        {
            f=0;
            break;
        }
    }
    return f;
}
int main()
{
    int i,j,f;
    for(i=2;i<=30;i++)
    {
        f=isPrime(i);
        if(f == 1)
            printf("%d ",i);
    }
    return 0;
}
