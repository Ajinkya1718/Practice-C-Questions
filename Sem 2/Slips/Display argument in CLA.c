#include<stdio.h>
int main(int argc,char *argv[])
{
    printf("Total Arguments:%d",argc-1);
    printf("\nDisplaying Arguments:-");
    for(int i=1;i<argc;i++)
        printf("\n%s",argv[i]);
}
