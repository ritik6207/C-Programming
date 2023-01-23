#include <stdio.h>
#include <string.h>
int main()
{
    char s[40];
    int len=0,c=1;
    printf("Enrer a string:\n");
    gets(s);
    while (s[len]!='\0')
    {
        if(s[len] ==' ')c++;
        len++;
    }
    printf("\nTotal words: %d",c);
    return 0;
}