#include<stdio.h>
int main()
{
    FILE *f1,*f2;
    char s1[20],s2[20],c;
    printf("Enter File Names:");
    scanf("%s%s",s1,s2);
    f1=fopen(s1,"r");
    f2=fopen(s2,"a");
    fprintf(f2,"\n");
    while((c=fgetc(f1))!=EOF)
        fputc(c,f2);
    fclose(f1);
    fclose(f2);
}