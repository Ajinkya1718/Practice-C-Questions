#include<stdio.h>
#include<string.h>
struct stud
{
    int Rollno;
    char Name[50];
    float per;
};
int main()
{
    FILE *f1;
    int n,i;
    char file[50];
    printf("Enter the count of total students:");
    scanf("%d",&n);
    struct stud s[n];
    printf("Enter a filename:");
    scanf("%s",file);
    f1=fopen(file,"w");
    for(i=0;i<n;i++)
    {
        printf("\nStudent Roll no:");
        scanf("%d",&s[i].Rollno);
        printf("Student Name:");
        scanf("%s",s[i].Name);
        printf("Percentage:");
        scanf("%f",&s[i].per);
        fprintf(f1,"%d %s %.2ff\n",s[i].Rollno,s[i].Name,s[i].per);
    }
    fclose(f1);
    f1=fopen(file,"r");
    for(i=0;i<n;i++)
    {
        fscanf(f1,"%d %s %f",&s[i].Rollno,s[i].Name,&s[i].per);
        printf("Stud Rollno:%d \n"
                "Stud Name:%s\n"
                "Stud Percentage:%.2f\n",s[i].Rollno,s[i].Name,s[i].per);
    }
    fclose(f1);
}