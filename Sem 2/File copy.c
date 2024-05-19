/*WAP to copy a file into another file using command line arguments.
*/
#include <stdio.h> 
#include <stdlib.h> 
  
int main() 
{ 
    FILE *f1, *f2; 
    char file[100], c; 
  
    printf("Enter the filename to open for reading \n"); 
    scanf("%s", file); 
  
    f1 = fopen(file, "r"); 
    if (f1 == NULL) 
    { 
        printf("Cannot open file %s \n", file); 
        exit(0); 
    } 
  
    printf("Enter the filename to open for writing \n"); 
    scanf("%s", file); 
  
    f2 = fopen(file, "w"); 
    if (f2 == NULL) 
    { 
        printf("Cannot open file %s \n", file); 
        exit(0); 
    } 
   
    while ((c=fgetc(f1)) != EOF) 
        fputc(c, f2);  
  
    printf("\nContents copied to %s", file); 
  
    fclose(f1); 
    fclose(f2); 
    return 0; 
}