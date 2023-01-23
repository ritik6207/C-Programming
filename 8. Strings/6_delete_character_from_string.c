#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,n;
    char str[100],ch;
    printf("Enter string:\n");
    scanf("%s",&str);
    //gets(str);
    printf("Enter character you want to delete:\n");
    scanf("%s",&ch);
    n=strlen(str);
    for ( i = 0,j=0; i < n; i++)
    {
        if (str[i]!=ch)
        {
            str[j]=str[i];
            j++;
        }
        
    }
    str[j]='\0';
    printf("After revoming charachter from srting: %s",str);
    return 0;
}