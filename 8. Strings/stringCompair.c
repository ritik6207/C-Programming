//1st method
/*#include <stdio.h>
#include <stdio.h>
int main()
{
    char s1[30], s2[20];
    int value;
    printf("Enter first String: ");
    gets(s1);
    printf("Enter second String: ");
    gets(s2);
    value=strcmp(s1,s2);
    if (value==0)
        printf("Same");
    else
        printf("Not same");
    return 0;
}*/
//2nd method
#include <stdio.h>
int main()
{
    char s1[40],s2[30];
    int flag=0,i;
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);
    for ( i = 0;(s1[i]!='\0' || s2[i]!='\0') ; i++)
    {
        if (s1[i]!=s2[i])
        {
            flag = 1;
            break;
        }
        
    }
    if (flag == 0)
        printf("Same");
    else
        printf("Not same");
    
    return 0;
}

