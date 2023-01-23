#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,len=0;
    char s[100],tmp;
    printf("Enter any string: ");
    gets(s);
    len=strlen(s);
    for ( i = 0; i < len; i++)
    {
        for ( j = i+1; j < len; j++)
        {
            if (s[i]>s[j])
            {
                tmp=s[j];
                s[j]=s[i];
                s[i]=tmp;
            }
            
        }
        
    }
    printf("String in the alphabetical order is: \n");
    puts(s);
    return 0;
}
