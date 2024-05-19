/*WAP to accept a string & substring. Check if the substring is present in
the given string or not using. If substring is present, replace by another string ,otherwise
display appropriate message. */
#include  <stdio.h>
#include  <string.h>
int main() {
        char s1[50], s2[50], replace[10], output[30];
        int i=0,j=0,f=0,s=0;
        printf("\nEnter the 1st string:");
	    fgets(s1,50,stdin);        
        printf("Enter the 2nd String:\n");
        fgets(s2,50,stdin);
        printf("Enter the string to replace:\n");
        scanf("%s",replace);
      
        for(i=0;s1[i]!='\0';i++)
        {
                if (s1[i]==s2[j]) 
                {
                        if (!f)
                        {
                            s=i;
                            j++;
                        }
                        if (s2[j] == '\0')
                        {
                            f=1;
                            break;
                        }
                } 
                else 
                    f = s = j = 0;
        }  
        if (s2[j] == '\0' && f)
        {
                for (i = 0; i < s; i++)
                        output[i] = s1[i];
                
                for (j = 0; j < strlen(replace); j++) 
                {
                        output[i] = replace[j];
                        i++;
                }

                
                for (j = s + strlen(s2); j < strlen(s1); j++)
                {
                        output[i] = s1[j];
                        i++;
                }

                
                output[i] = '\0';
                printf("Output: %s\n", output);
        } else {
                printf("%s is not a substring of %s\n", s2, s1);
        }
        return 0;
  }