/*WAP to create a student structure having fields roll_no, stud_name & address.
Accept the details of ‘n’ students into the structure, rearrange the data in alphabetical order of
stud_name & display the data. */
#include<stdio.h>
#include<string.h>
struct stud
{
    int Rollno;
    char Name[50];
    char address[100];
};
int main()
{
    int n,i,j;
    printf("Enter total no. of students:");
    scanf("%d",&n);
    struct stud s[n],t;
    for(i=0;i<n;i++)
    {
        printf("\nStudent Roll no:");
        scanf("%d",&s[i].Rollno);
        printf("Student Name:");
        scanf("%s",s[i].Name);
        printf("Address:");
        scanf("%s",s[i].address);
    }
    printf("\nRearranging the Records:\n");
    for(i=0;i<n;i++)
    {   
        for(j=i+1;j<n;j++)
        {
            if(strcmp(s[i].Name,s[j].Name)>0)
            {
                t=s[i];
                s[i]=s[j];
                s[j]=t;
            }

        }
    }
    for(i=0;i<n;i++)
    {
        printf("\nStudent Roll no:%d",s[i].Rollno);
        printf("\nStudent Name:%s",s[i].Name);
        printf("\nAddress:%s\n",s[i].address);
    }
}