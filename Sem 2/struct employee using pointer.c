#include<stdio.h>
struct emp
{
    int eno;
    char ename[50];
    int salary;
};
int main()
{
    int n,i,max=0;
    printf("Enter the no. of employee:");
    scanf("%d",&n);
    struct emp e[n],*p=e;
    for(i=0;i<n;i++,p++)
    {
        printf("\nEmployee ID:");
        scanf("%d",&p->eno);
        printf("Employee Name:");
        scanf("%s",p->ename);
        printf("Employee Salary:");
        scanf("%d",&p->salary);
    }
    printf("\nDisplaying Employee with Max Salary:");
    for(i=0;i<n;i++)
    {   
            printf("\nEmployee ID:%d",p->eno);
            printf("\nEmployee Name:%s",p->ename);
            printf("\nEmployee ID:%d\n",p->salary);
    }
}