#include <stdio.h>
#include <string.h>
int main()
{
    char s1[30];
    int len;
    printf("Enter a string:\n");
    gets(s1);
    while (s1[len]!='\0')
    {
        len++;
    }
    printf("Length of string:  %d",len);
    return 0;
}