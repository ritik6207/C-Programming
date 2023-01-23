#include <stdio.h>
int main()
{
    char str[20],*p1;
    int i,len=0;
    printf("Enter String:\n");
    // scanf("%s",&str);
    gets(str);
    p1=&str;
    while (*p1!='\0')
    {
        p1++;
        len++;
    }
    printf("Length of string is %d:",len);
    return 0;
}