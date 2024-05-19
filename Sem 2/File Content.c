/*WAP to display contents of a file*/
#include<stdio.h>
int main()
{
    FILE *f1;
    char c,file[100];
    printf("Enter a Filename:");
    scanf("%s",file);
    f1=fopen(file,"r");
    while((c=fgetc(f1))!=EOF)
        fputc(c,stdout);
    fclose(f1);
}