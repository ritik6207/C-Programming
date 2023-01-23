#include <stdio.h>
#include <string.h>
int main()
{
    int i=0,j=0;
    char s[50];
    printf("Enter string u want to print: \n");
    gets(s);
    for ( i = 0;i<=s[i]!='\0'; i++)
    {
        for ( j = 0; j < i; j++)
        {
            printf("%c",s[j]);
        }
        printf("\n");
    }
    
    return 0;
}
