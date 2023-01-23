#include <stdio.h>
#include <string.h>
int main()
{
    int upr=0,lwr=0,i=0;
    char ch[50];
    printf("Enter a string: ");
    gets(ch);
    while (ch[i]!='\0')
    {
        if (ch[i]>='A'&&ch[i]<='Z')
            upr++;
        if(ch[i]>='a'&&ch[i]<='z')
            lwr++;
        i++;
    }
    printf("\nupper case lattter are: %d",upr);
    printf("\nlower case lattter are: %d",lwr);
    return 0;
}
