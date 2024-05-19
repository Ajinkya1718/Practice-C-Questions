/*WAP to concatenate two files using CLA*/
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    FILE *f1,*f2;
    char c;
    f1=fopen(argv[1],"r");
    f2=fopen(argv[2],"a");
    if(f1==NULL || f2 == NULL)
    {
        printf("Either of the File cannot be opened");
        exit(1);
    }
    while((c=fgetc(f1))!= EOF)
        fputc(c,f2);
    printf("File is Appened Sucessfully");
    fclose(f1);
    fclose(f2);
}