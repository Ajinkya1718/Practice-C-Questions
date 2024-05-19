/*WAP to accept student information (rollno, name, marks) & display same
information using structure*/
#include<stdio.h>
struct student
{
    int Rollno;
    char Name[50];
    float Marks;
};
int main()
{
    int n,i;
    printf("Enter total no. of students:");
    scanf("%d",&n);
    struct student s[n];
    for(i=0;i<n;i++)
    {
        printf("\nRollno:");
        scanf("%d",&s[i].Rollno);
        printf("Name:");
        scanf("%s",s[i].Name);
        printf("Marks:");
        scanf("%f",&s[i].Marks);
    }
    printf("\nDisplaying Book Information:");
    for(i=0;i<n;i++)
    {   
        printf("\nRollno:%d",s[i].Rollno);
        printf("\nName:%s",s[i].Name);
        printf("\nMarks:%.2f",s[i].Marks);
    }
}