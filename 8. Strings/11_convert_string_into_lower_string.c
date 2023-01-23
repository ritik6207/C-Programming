//1st method
/*#include <stdio.h>
#include <string.h>
int main()
{
    char s1[50];
    printf("Enter string: ");
    gets(s1);
    printf("\nBefore converting: %s",s1);
    strlwr(s1);
    printf("\nAfter converting: %s",s1);
    return 0;
}*/
//2n method
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[50],s2[50];
    int i=0;
    printf("Enter string: ");
    gets(s1);
    while (s1[i]!='\0')
    {
        if (s1[i]>=65&&s1[i]<=90)
        {
            s2[i]=s1[i]+32;
        }
        else
        {
            s2[i]=s1[i];
        }
        i++;
    }
    s2[i]='\0';
    printf("\nLower case string: %s",s2);
    return 0;
}
