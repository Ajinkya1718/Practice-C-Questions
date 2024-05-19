#include<stdio.h>
struct emp
{
    int eno;
    char ename[50];
    int salary;
};
int main()
{
    int i,n,max=0;
    printf("Enter total no. of employees:");
    scanf("%d",&n);
    struct emp e[n];
    printf("\nEnter Student Information:-");
    for(i=0;i<n;i++)
    {
        printf("\nEnter Emp ID:");
        scanf("%d",&e[i].eno);
        printf("Enter Emp Name:");
        scanf("%s",e[i].ename);
        printf("Enter Emp Salary:");
        scanf("%d",&e[i].salary);
        if(e[i].salary>max)
            max=e[i].salary;
    }
    printf("\nDisplaying Emp with max salary:-");
    for(i=0;i<n;i++)
    {
        if(e[i].salary==max)
        {
            printf("\nEnter Emp ID:%d",e[i].eno);
            printf("\nEnter Emp Name:%s",e[i].ename);
            printf("\nEnter Emp Salary:%d",e[i].salary);
        }
    }
}