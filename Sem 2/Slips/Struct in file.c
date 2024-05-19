#include<stdio.h>
struct book
{
    int bid;
    char bname[50];
    int price;
};
int main()
{
    FILE *f1;
    int n,i,bid,price;
    char s[50],bname[50];
    printf("Enter total no. of books:");
    scanf("%d",&n);
    struct book b[n];
    printf("\nEnter file name:");
    scanf("%s",s);
    f1=fopen(s,"w");
    for(i=0;i<n;i++)
    {
        printf("\nEnter Bookid:");
        scanf("%d",&b[i].bid);
        printf("Enter Book Name:");
        scanf("%s",b[i].bname);
        printf("Enter Price:");
        scanf("%d",&b[i].price);
        fprintf(f1,"\n%d %s %d",b[i].bid,b[i].bname,b[i].price);
    }
    fclose(f1);
    f1=fopen(s,"r");
    printf("\nDisplaying Output:");
    for(i=0;i<n;i++)
    {
        fscanf(f1,"%d %s %d",&bid,bname,&price);
        printf("\nEnter Bookid:%d",bid);
        printf("\nEnter Book Name:%s",bname);
        printf("\nEnter Price:%d\n",price);
    }
    fclose(f1);
}