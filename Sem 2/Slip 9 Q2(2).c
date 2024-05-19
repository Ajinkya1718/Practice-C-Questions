/* WAP to store n players details (id, name,no_of_runs,no_of_wickets, average)
& display player name scoring maximum no. of runs.*/
#include<stdio.h>
struct player
{
    int ID;
    char Name[50];
    int Runs;
    int wicket;
    float average;
};
int main()
{
    int n,i,max=0;
    printf("Enter the no. of players:");
    scanf("%d",&n);
    struct player p[n];
    for(i=0;i<n;i++)
    {
        printf("\nPlayer ID:");
        scanf("%d",&p[i].ID);
        printf("Player Name:");
        scanf("%s",p[i].Name);
        printf("No. of Runs:");
        scanf("%d",&p[i].Runs);
        printf("No. of Wickets:");
        scanf("%d",&p[i].wicket);
        printf("Average:");
        scanf("%f",&p[i].average);
        if(p[i].Runs>max)
            max=p[i].Runs;
    }
    printf("\nDisplaying Player Information:");
    for(i=0;i<n;i++)
    {   
            printf("\nPlayer ID:%d",p[i].ID);
            printf("\nPlayer Name:%s",p[i].Name);
            printf("\nNo. of Runs:%d",p[i].Runs);
            printf("\nNo. of Wickets:%d",p[i].wicket);
            printf("\nAverage:%f\n",p[i].average);
    }
    printf("\nPlayer who scored Max Runs:");
    for(i=0;i<n;i++)
    {   
        if(max==p[i].Runs)
        {
            printf("\nPlayer ID:%d",p[i].ID);
            printf("\nPlayer Name:%s",p[i].Name);
            printf("\nNo. of Runs:%d",p[i].Runs);
            printf("\nNo. of Wickets:%d",p[i].wicket);
            printf("\nAverage:%f\n",p[i].average);
        }
    }
}