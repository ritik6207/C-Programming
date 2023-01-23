/*Compair string using pointer*/
#include <stdio.h>
int main()
{
    char s1[20],s2[20],*p1,*p2;
    int i,flag=0;
    printf("Enter first string:\n");
    gets(s1);
    printf("Enter second string:\n");
    gets(s2);
    p1=&s1;
    p2=&s2;
    while (*p1!='\0' || *p2!='\0')
    {
        if (*p1==*p2)
        {
            ++p1;
            ++p2;
        }
        else
        {
            flag=1;
            break;
        }
    }
    if(*p1=='\0' && *p2=='\0' && flag==0)
        printf("String are Same:\n");
    else
        printf("String are not same:\n");
}