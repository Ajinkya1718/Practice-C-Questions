/*WAP to check whether a number is +ve, -ve or zero using macros*/
#include<stdio.h>
#define Pos(x) x>0?1:0
#define Zero(x) x==0?1:0
int main()
{
    int n;
    printf("Enter the Value of n:");
    scanf("%d",&n);
    if(Zero(n))
        printf("Num is Zero");
    else if(Pos(n))
        printf("Num is +ve");
    else
        printf("Num is -ve");
}