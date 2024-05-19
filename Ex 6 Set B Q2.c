#include<stdio.h>
#include<stdlib.h>
int main()
{
    int c,Q,T=0,D=0,P=0,B=0,S=0,F=0,C=0;
    do
    {
        printf("\nMenu");
        printf("\n1.)Pen(Rs. 10)");
        printf("\n2.)Book(Rs. 70)");
        printf("\n3.)Scale(Rs. 15)");
        printf("\n4.)Fevicol(Rs. 20)");
        printf("\n5.)Color Pens(Rs. 40)");
        printf("\n6.)Exit");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
                printf("Enter the Quantity= "); 
                scanf("%d",&Q);
                P=P+(Q*10);
                if(Q>10)
                    D+=P*0.2;
                continue; 
            case 2:
                printf("Enter the Quantity= ");
                scanf("%d",&Q);
                B=B+(Q*70);
                if(Q>10)
                    D+=B*0.2;
                continue;
            case 3:
                printf("Enter the Quantity= ");
                scanf("%d",&Q);
                S=S+(Q*15);
                if(Q>10)
                    D+=S*0.2;
                continue;
            case 4:
                printf("Enter the Quantity= ");
                scanf("%d",&Q);
                F=F+(Q*20);
                if(Q>10)
                    D+=F*0.2;
                continue;
            case 5:
                printf("Enter the Quantity= ");
                scanf("%d",&Q);
                C=C+(Q*40);
                if(Q>10)
                    D+=C*0.2;
                continue;
            case 6:
                break;                           
        }
        T=(P+B+S+F+C)-D;
        printf("Total= %d",T);

    }while(c<=5);
    return 1;
}