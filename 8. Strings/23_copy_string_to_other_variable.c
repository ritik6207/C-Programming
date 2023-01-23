//1st method
/*#include <stdio.h>
#include <string.h>
int main()
{
    char s1[50],s2[50];
    printf("Enter string: ");
    gets(s1);
    strcpy(s2,s1);
    printf("Copy string is : %s",s2);
    return 0;
}*/
//2nd method
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[50],s2[50];
    int len=0,i;
    printf("Enter string: ");
    fflush(stdin);
    gets(s1);
    while (s1[len]!='\0')
    {
        len++;
    }
    for ( i = 0; i < len; i++)
    {
        s2[i]=s1[i];
    }
    printf("Copy string is :");
    puts(s2);
    return 0;
}
