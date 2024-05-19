/* WAP to accept two filenames as command line arguments. Copy the contents of
the first file to the second such that the case of all alphabets is reversed*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(int argc,char*argv[])
{
    if(argc<3)
    {    printf("Enter at least 2 files\n");
        exit(1);
    }
    FILE*f1,*f2;
    int c;
    f1=fopen(argv[1],"r");
    f2=fopen(argv[2],"w");
    
    if(f1==NULL||f2==NULL)
    {    printf("Both files could not be opened\n");
         exit(1);
    }
    while((c=fgetc(f1))!=EOF){
        if(isupper(c)){c=tolower(c);}
        else if(islower(c)){c=toupper(c);}
        fputc((char)c,f2);
    }
    printf("Case swapping completed .\n");
    fclose(f1);
    fclose(f2);
    return 0;
}

