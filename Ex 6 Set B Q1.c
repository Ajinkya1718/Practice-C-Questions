#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int x1,y1,x2,y2,ch,d;
    float s;
    do
    {
        printf("\nMenu");
        printf("\n1.)Distance between two points");
        printf("\n2.)Slope of line");
        printf("\n3.) Quadrant");
        printf("\n4.)Exit");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Enter the coordinates of two points= ");
                scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
                d=sqrt((pow(x2-x1,2))+(pow(y2-y1,2)));
                printf("Distance between the points= %d",d);
                break;
            case 2:
                printf("Enter the coordinates of two points= ");
                scanf("%d%d%d%d",&x1,&y1,&x2,&y2);    
                s=(y2-y1)/(x2-x1);
                printf("Slope of a line= %f",s);
                break;
            case 3:
                if(x1>0 && y1>0 && x2>0 && y2>0)
                    printf("\n Points are in same quadrant");
                else 
                    printf("\n Points do not lie in same Quadrant");
            case 4:
                exit(1);             
        }
        
    }while(ch<=4);
    return 1;
}
