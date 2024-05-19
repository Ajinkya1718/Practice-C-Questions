#include<stdio.h>
#include<stdlib.h>
int main()
{
    int c,Q,T,B,t=0;
    printf("Enter the budget= ");
    scanf("%d",&B);
    do
    {
        printf("\nMenu");
        printf("\n1.)Apple(Rs. 120/kg)");
        printf("\n2.)Cake(Rs. 700/kg)");
        printf("\n3.)Bread(Rs. 20/Per Loaf)");
        printf("\n4.)Exit the Menu");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
                printf("Enter the Quantity= "); 
                scanf("%d",&Q);
                T+=(Q*120);
                break; 
            case 2:
                printf("Enter the Quantity= ");
                scanf("%d",&Q);
                T+=(Q*700);
                break;
            case 3:
                printf("Enter the Quantity= ");
                scanf("%d",&Q);
                T+=(Q*20);
                break;
            case 4:
                break;                           
        }
        B-=T;
        if(B==0||B<0||c==4)
            break;
        else
            printf("Total price=%d",t+=T);
        T=0;
    }while(c<=3);
    printf("Budget= %d",B);
    return 1;
}