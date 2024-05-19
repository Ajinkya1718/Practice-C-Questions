//WAP to check given number is even or odd using macros. 
#include<stdio.h>
#define even(x) x%2==0
int main()
{
    int a;
    printf("Enter value of a:");
    scanf("%d",&a);
    if(even(a))
        printf("No. is Even");
    else
        printf("No. is Odd");
}