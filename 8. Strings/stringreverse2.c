//1st method
/*#include <stdio.h>
#include <string.h>
int main()
{
    char s1[30],ch;
    int i,j,l;
    printf("Enter string: ");
    gets(s1);
    printf("\nBefore reverse: %s",s1);
    l=strlen(s1);
    for ( i = 0; i <l/2 ; i++)
    {
        ch=s1[i];
        s1[i]=s1[l-1-i];
        s1[l-1-i]=ch;
    }
    printf("\nAfter reverse: %s",s1);
    return 0;
}*/
//2nd method
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[30],ch;
    int i,j,l;
    printf("Enter string: ");
    gets(s1);
    printf("\nBefore reverse: %s",s1);
    l=strlen(s1);
    for ( i = 0,j=l-1; i <j ; i++,j--)
    {
        ch=s1[i];
        s1[i]=s1[l-1-i];
        s1[l-1-i]=ch;
    }
    printf("\nAfter reverse: %s",s1);
    return 0;
}
