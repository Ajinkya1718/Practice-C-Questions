//WAP to accept n records of employee information (eno,ename,salary) & display record of employees having maximum salary.
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
    struct emp e[n];
    for(i=0;i<n;i++)
    {
        printf("\nEmployee ID:");
        scanf("%d",&e[i].eno);
        printf("Employee Name:");
        scanf("%s",e[i].ename);
        printf("Employee Salary:");
        scanf("%d",&e[i].salary);
        if(e[i].salary>max)
            max=e[i].salary;
    }
    printf("\nDisplaying Employee with Max Salary:");
    for(i=0;i<n;i++)
    {   
        if(e[i].salary==max)
        {
            printf("\nEmployee ID:%d",e[i].eno);
            printf("\nEmployee Name:%s",e[i].ename);
            printf("\nEmployee ID:%d\n",e[i].salary);
        }
    }
}