/* WAP to display even numbers from file using command line arguments.
*/
#include<stdio.h>
int main(int argc,char *argv[])
{
    FILE *f1;
    int num;
    f1=fopen(argv[1],"r");
    while((fscanf(f1,"%d",&num))!=EOF)
        if(num % 2==0)
            printf("%d ",num);
    fclose(f1);
}
