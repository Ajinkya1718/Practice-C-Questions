#include<stdio.h>
float power(float x,int n)
{
    float pow=1;
    for(int i=1;i<=n;i++)
        pow*=x;  
    return pow;
}
float factorial(int n)
{
    float f=1;
    for(int i=1;i<=n;i++)
        f*=i;
    return f;
}
int main()
{
    int i,N;
    float x,sum;
    printf("Enter the value of x & the Nth term= ");
    scanf("%f%d",&x,&N);
    for(i=3;i<=(2*N)-1;i+=2)
        sum+=power(x,i)/factorial(i);
    printf("%0.3f",x-=sum);
    return 1;
}