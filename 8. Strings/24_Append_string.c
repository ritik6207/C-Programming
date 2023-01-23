#include <stdio.h>
#include <string.h>
int main()
{
    char s1[50],s2[50];
    int len1=0,len2=0,i,j;
    printf("Enter string: ");
    fflush(stdin);
    gets(s1);
    printf("\nEnter another string: ");
    fflush(stdin);
    gets(s2);
    while (s1[len1]!='\0')
    {
        len1++;
    }
    while (s2[len2]!='\0')
    {
        len2++;
    }
    for (j=0 ,i = len1; j <= len2; i++,j++)
    {
        s1[i]=s2[j];
    }
    puts(s1);
    return 0;
}
