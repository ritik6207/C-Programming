#include <stdio.h>
#include <string.h>
int main()
{
    char s1[50];
    int i,l;
    printf("Enter a string: ");
    gets(s1);
    l=strlen(s1);
    for ( i = 0; i < l; i++)
    {
        printf("%c\t%d\n",s1[i],s1[i]);
    }
    return 0;
}
