#include <stdio.h>
#include <string.h>
int main()
{
    char s[50];
    int i,j,l,flag=0;
    printf("Enter any string: ");
    gets(s);
    l=strlen(s);
    for ( i = 0,j=l-1; i < l/2; i++,j--)
    {
        if (s[i]!=s[j])
        {
            flag=1;
            break;
        }
        
    }
    if (flag == 0)
    {
        printf("\nit is palindrome:");   //if entered string reverse is same, it is called palindrome. for ex:- ritir, reverse=ritir
    }
    else
    {
        printf("\nit is not palindrome:");
    }
    return 0;
}
