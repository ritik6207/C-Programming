#include <stdio.h>
#include <string.h>
int main()
{
    char s1[80],s2[50];
    int len1=0,len2=0,i,j,found=0;
    printf("Enter a sting: ");
    gets(s1);
    while (s1[len1]!='\0')
    {
        len1++;
    }
    printf("\n\nEnter the word to find: ");
    gets(s2);
    while (s2[len2]!='\0')
    {
        len2++;
    }
    for ( i = 0; i < len1; i++)
    { 
        found=1;
        for ( j = 0; j < len2; j++)
        {
            if (s1[i+j]!=s2[j])
            {
                found=0;
                break;
            }
            
        }
        if (found==1)
        {
            printf("\n\n\tstring found:");
            break;
        }
        
    }
    if (found==0)
    {
        printf("\n\n\tstring not found:");
    }
    
    return 0;
}
