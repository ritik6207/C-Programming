#include <stdio.h>
int main()
{
    int i = 0, j = 0;
    char *s1, *s2, *s3;
    printf("Enter first string:\n");
    gets(s1);
    printf("Enter second string:\n");
    gets(s2);
    printf("Before a concatenation the strings are:\n");
    puts(s1);
    puts(s2);
    while (*s1)
    {
        s3[i++] = *s2++;
    }
    while (*s2)
    {
        s3[i++] = *s3++;
    }
    s3[i] = '\0';
    printf("After contentation the string are:\n");
    puts(s3);
    return 0;
}