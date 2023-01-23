//1st method
/*#include <stdio.h>
#include <string.h>
int main()
{
    char s1[50],ch;
    int i,j,l;
    printf("Enter any string: ");
    gets(s1);
    printf("\nBefore reverse: %s",s1);
    l=strlen(s1);
    for ( i = 0; i < l/2; i++)
    {
        ch=s1[i];
        s1[i]=s1[l-1-i];
        s1[l-1-i]=ch;
    }
    printf("\nAfter reverse: %s",s1);
    return 0;
}*/
//2nd metheod
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[50];
    printf("Enter any string: ");
    gets(s1);
    printf("\nBefore reverse: %s",s1);
    strrev(s1);
    printf("\nAfter reverse: %s",s1);
    return 0;
}
