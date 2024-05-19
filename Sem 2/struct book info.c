/*WAP to accept n books information (bookid, bname, price) and store it in file
and display the same.
*/
#include<stdio.h>
struct emp
{
    int book_id;
    char book_name[50];
    char book_author[50];
};
int main()
{
    int n,i;
    printf("Enter the no. of books:");
    scanf("%d",&n);
    struct emp b[n],t;
    for(i=0;i<n;i++)
    {
        printf("\nBook ID:");
        scanf("%d",&b[i].book_id);
        printf("Book Name:");
        scanf("%s",b[i].book_name);
        printf("Author:");
        scanf("%s",b[i].book_author);
    }
    printf("\nDisplaying Book Information:");
    for(i=0;i<n;i++)
    {   
            printf("\nBook ID:%d",b[i].book_id);
            printf("\nBook Name:%s",b[i].book_name);
            printf("\nAuthor:%s\n",b[i].book_author);
    }
}