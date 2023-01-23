#include <stdio.h>
#include <string.h>
int main()
{
    char s[50];
    int i,j,l,a=0;
    printf("Enter any string: ");
    gets(s);
    l=strlen(s);
    for ( i = 0; i < l; i++)
    {
        for ( j = 0; j <l; j++)
        {
            if (s[i]==s[j])
            a++;
            
        }
        printf("%c = %d",s[i],a);
        a=0;
        printf("\n");
    }
    
    return 0;
}
