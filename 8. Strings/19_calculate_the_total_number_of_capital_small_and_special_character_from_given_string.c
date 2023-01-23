#include <stdio.h>
#include <string.h>
int main()
{
    int i,l,cap=0,sam=0,spe=0;
    char s[50];
    printf("Enter string: ");
    gets(s);
    l=strlen(s);
    for ( i = 0; i < l; i++)
    {
        if (s[i]>='A'&&s[i]<='Z')
        {
            cap++;
        }
        else if (s[i]>='a'&&s[i]<='z')
        {
            sam++;
        }
        else
        {
            spe++;
        }
    }
    printf("\n Capital latter: %d\n",cap);
    printf("Small latter: %d\n",sam);
    printf("Special latter: %d\n",spe);
    return 0;
}
