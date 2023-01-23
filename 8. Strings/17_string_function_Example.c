#include <stdio.h>
int main()
{
    int cout1=0,cout2=0,flag=0,i;
    char s1[20],s2[20];
    printf("Enter a string1: ");
    gets(s1);
    printf("\nEnter another string2: ");
    gets(s2);
    while(s1[cout1]!='\0')
        cout1++;
    while (s2[cout2]!='\0')
        cout2++;
    i=0;
    while ((i<cout1)&&(i<cout2))
    {
        if (s1[i]==s2[i])
        {
            i++;
            continue;
        }
        if (s1[i]<s2[i])
        {
            flag= -1;
            break;
        }
        if (s1[i]>s2[i])
        {
            flag= 1;
            break;
        }
    }
    if (flag==0)
    {
        printf("Both string are equal:");
    }
    if (flag==1)
    {
        printf("sting1 is greater than string2:",s1,s2);
    }
    if (flag==-1)
    {
        printf("sting1 is less than string2:",s1,s2);
    }
    return 0;
}
