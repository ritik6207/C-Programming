//1st Methods
/*#include <stdio.h>
#include <string.h>
int main()
{
    char a[30];
    int cout=0,i=0;
    printf("Enter name:\n");
    gets(a);
    cout=strlen(a);
    puts(a);
    printf("Length of string is: %d",cout);
    return 0;
}*/
//2nd method
#include <stdio.h>
int main()
{
    char a[40];
    int len=0,i=0;
    printf("Enter name:\n");
    gets(a);
    while(a[i]!='\0')
    {
        len++;
        i++;
    }
    printf("Length of string is:  %d",len);
    return 0;
}

