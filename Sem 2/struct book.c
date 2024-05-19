/* WAP to accept book information (book_id, book_name, book_author).
Read the details of n number of books. Display book details in ascending order of book
name.
*/
#include<stdio.h>
#include<string.h>
struct emp
{
    int book_id;
    char book_name[50];
    char book_author[50];
};
int main()
{
    int n,i,j;
    printf("Enter the no. of books:");
    scanf("%d",&n);
    struct emp b[10],t;
    for(i=0;i<n;i++)
    {
        printf("\nBook ID:");
        scanf("%d",&b[i].book_id);
        printf("Book Name:");
        scanf("%s",b[i].book_name);
        printf("Author:");
        scanf("%s",b[i].book_author);
    }
    printf("\nDisplaying Employee with Max Salary:");
    for(i=0;i<n;i++)
    {   
            printf("\nBook ID:%d",b[i].book_id);
            printf("\nBook Name:%s",b[i].book_name);
            printf("\nAuthor:%s\n",b[i].book_author);
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(strcmp(b[j].book_name,b[j+1].book_name)>0)
            {
                t=b[j];
                b[j]=b[j+1];
                b[j+1]=t;
            }
        }
    }
    printf("Printing after sort");
    for(i=0;i<n;i++)
    {
        printf("\nBook ID:%d",b[i].book_id);
        printf("\nBook Name:%s",b[i].book_name);
        printf("\nAuthor:%s\n",b[i].book_author);
    }
}