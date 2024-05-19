/*WAP to accept novel information (novelid, novelname & price) & display it
using pointers & user defined function. */
#include<stdio.h>
struct novel
{
    int id;
    char name[50];
    int price;
};
void display(struct novel *p)
{
    printf("\nNovel Id:%d",p->id);
    printf("\nNovel Name:%s",p->name);
    printf("\nPrice:%d\n",p->price);
}
int main()
{
    int n,i;
    printf("Enter total no. of records:");
    scanf("%d",&n);
    struct novel N[n];
    for(i=0;i<n;i++)
    {
        printf("\nEnter Novel id:");
        scanf("%d",&N[i].id);
        printf("Enter the Novel Name:");
        scanf("%s",N[i].name);
        printf("Enter the Price:");
        scanf("%d",&N[i].price);
    }
    printf("\nPrinting the Records:");
    for(i=0;i<n;i++)
        display(&N[i]);
}