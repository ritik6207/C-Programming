//1st string
/*#include <stdio.h>
#include <string.h>
int main()
{
    char s1[50];
    printf("Enter string: ");
    gets(s1);
    printf("\nBefore upper string: %s",s1);
    strupr(s1);
    printf("\nAfter upper string: %s",s1);
    return 0;
}*/
//2nd method
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
        if (s1[i]>=97&&s1[i]<=122)
        {
            s2[i]=s1[i]-32;
        }
        else
        {
            s2[i]=s1[i];
        }
        i++;
    }
    s2[i]='\0';
    printf("\n\nUpper case string: %s",s2);
    return 0;
}
