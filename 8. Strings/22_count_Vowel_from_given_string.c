#include <stdio.h>
#include <stireg.h>
int main()
{
    char s[100],ch;
    int len=0,i,vow=0;
    printf("Enter stirng: ");
    fflush(stdin);
    gets(s);
    while (s[len]!='\0')
    {
        len++;
    }
    for ( i = 0; i <= len; i++)
    {
        ch=s[i];
        if (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' )
        {
            vow++;
        }
        
    }
    printf("\nTotal vowel is = %d",vow);
    return 0;
}
