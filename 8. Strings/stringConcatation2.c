#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20],s2[10];
    printf("Enter first name: ");
    gets(s1);
    printf("Enter second name: ");
    gets(s2);
    strncat(s1,s2,3);
    printf("%s",s1);
    return 0;
}