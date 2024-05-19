#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int c;
    double x;
    do
    {
        printf("\nMenu");
        printf("\nChoose between the following options only");
        printf("\n1.) Sine()");
        printf("\n2.) Cosine()");
        printf("\n3.) log()");
        printf("\n4.)e^x");
        printf("\n5.)Square Root");
        printf("\n6.)Exit");
        scanf("\n%d",&c);
        switch(c)
        {
            case 1:
                printf("\nEnter a value= ");
                scanf("%lf",&x);
                printf("\nSine(%f)= %lf",x,sin(x));
                break;
            case 2:
                printf("\nEnter a value= ");
                scanf("%lf",&x);
                printf("\nCosine(%f)= %lf",x,cos(x));
                break; 
            case 3:
                printf("\nEnter a value= ");
                scanf("%lf",&x);
                printf("\nlog(%f)= %lf",x,log10(x));
                break;
            case 4:
                printf("\nEnter a value= ");
                scanf("%lf",&x);
                printf("\ne^%f= %lf",x,exp(x));
                break;
            case 5:
                printf("\nEnter a value= ");
                scanf("%lf",&x);
                printf("\nSquare Root of %f= %lf",x,sqrt(x));
                break;
            case 6:
                exit(1);
            default:
                printf("Choose between 1 to 6 only");                               
        }
    }
    while(c<=6);
    return 1;
}