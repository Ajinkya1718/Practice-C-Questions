#include<stdio.h>
// Power function
float power(float x,int n)
{
    float pow=1;
    for(int i=1;i<=n;i++)
        pow*=x;  
    return pow;
}
// Factorial Function
float fact(int n)
{
    float f=1;
    for(int i=1;i<=n;i++)
        f*=i;
    return f;
}
// Exponential Function
float expo (float x,int n)
{
    float sum=1;
    for(int i=1;i<=n;i++)
        sum+=power(x,i)/fact(i);
    return sum;
}
// Sin(x) Series Function
float sine (float x,int n)
{
    float sum=0;
    int sign=1;
    for(int i=1;i<=(2*n)-1;i+=2)
    {
        sum+=sign*(power(x,i)/fact(i));
        sign*=-1;
    }    
    return sum;
}
// Cos(x) Series Function
float cosine (float x,int n)
{
    int sign=1;
    float sum=0;
    for(int i=0;i<=(2*n)-2;i+=2)
    {
        sum+=sign*(power(x,i)/fact(i));
        sign*=-1;
    }
    return sum;
}
int main()
{
    int n,c;
    float x;
    do
    {
        printf("\n Menu"
                "\n 1.) e^x"
                "\n 2.) Sin(x)"
                "\n 3.) Cos(x)");
        printf("\nEnter your choice= ");
        scanf("%d",&c);
        if(c>0 && c<4)
        {   printf("\nEnter the value of x & the nth term= ");
            scanf("%f%d",&x,&n);
            switch(c)
            {
                case 1:
                    printf("e^x= %.3f",expo(x,n));
                    break;
                case 2:
                    printf("Sin(x)= %.3f",sine(x,n));
                    break;   
                case 3:
                    printf("Cos(x)= %.3f",cosine(x,n));
                    break;      
            }
        }
        else
            printf("Choose between option 1 to 3");
    } while (c>0 && c<4);
    return 1;
}