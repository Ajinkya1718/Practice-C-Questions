#include<stdio.h>
int main()
{
    FILE *f1,*f2;
    char file1[20],file2[20],c;
    printf("Enter file name to copy from:");
    scanf("%s",file1);
    f1=fopen(file1,"r");
    printf("Enter the file name to write to:");
    scanf("%s",file2);
    f2=fopen(file2,"w");
    while((c=fgetc(f1))!=EOF)
        fputc(c,f2);
    fclose(f1);
    fclose(f2);
}