/*WAP to create employee having fields emp_id, emp_name, designation. Pass
this entire structure to function & display the structure elements using pointers.
*/
#include<stdio.h>
struct emp
{
    int empid;
    char Name[50];
    char designation[20];
};
void display(struct emp *p)
{
        printf("\nEmployee Id:%d",p->empid);
        printf("\nEmployee Name:%s",p->Name);
        printf("\nEmployee Designation:%s",p->designation);
        printf("\n"); 
}

int main()
{
    int n;
    printf("Enter no. of records:");
    scanf("%d",&n);
    struct emp e[n];
    for(int i=0;i<n;i++)
    {
        printf("\nEmployee Id:");
        scanf("%d",&e[i].empid);
        printf("Employee Name:");
        scanf("%s",e[i].Name);
        printf("Employee Designation:");
        scanf("%s",e[i].designation);
    }
    for(int i=0;i<n;i++)
        display(&e[i]);
}