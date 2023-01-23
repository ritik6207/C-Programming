#include <stdio.h>
#include <string.h>
int main()
{
    int len=0,i;
    char a[40],b[40];
    printf("Enter original string:\n");
    gets(a);
    while (a[len]!='\0')
    {
        len++;
    }
    for ( i = 0; i < len; i++)
    {
        if (a[i]>'A'&&a[i]<='Z')
        {
            b[i]=a[i]+32;      //ASCII Value of 'A' is 65 and 'a' is 97
        }
        else if (a[i]>='a'&&a[i]<='z')
        {
            b[i]=a[i]-32;
        }
        else
        {
            b[i]=a[i];
        }
    }
    printf("\ntoggle string: %s",b);
    //getchar();
    return 0;
}
