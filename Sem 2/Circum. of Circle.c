/*Write a macro CALC that will compute the circumference of a circle. Using this macro find
the circumference for the given radius.*/
#include<stdio.h>
#define Circum(r) 2*3.14*r
int main()
{
    int r;
    printf("\nEnter the Radius:");
    scanf("%d",&r);
    printf("\nCircumference of Circle:%.2f",Circum(r));
}
