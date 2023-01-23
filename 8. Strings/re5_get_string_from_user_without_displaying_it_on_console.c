#include <stdio.h>
int main()
{
    int n,count=0;
    char str[100],ch;
    printf("\nEnter string: ");
    while (1)
    {
        ch=gets();
        if (ch==13)
        {
            break;
        }
        str[count]=ch;
        count++;
    }
    printf("\nEntered string: %s",str);
    return 0;
}
