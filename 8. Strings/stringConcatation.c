//1st method
/*#include <stdio.h>
#include <string.h>
int main()
{
    char a[30],b[20];                  // You can also write ,char a[30]="Ritik",char b[20]="Kumar";
    printf("Enter frist name: ");
    gets(a);
    printf("%s\n",a);
    printf("Enter second name: ");
    gets(b);
    printf("%s\n",b);
    strcat(a,b);
    printf("After concatation is:  %s",a);
    return 0;
}*/
//2nd method
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[30],s2[20];
    int len1,len2,i;
    printf("Enter first name: ");
    gets(s1);
    printf("Enter second name: ");
    gets(s2);
    len1=strlen(s1);
    len2=strlen(s2);
    for ( i = 0; i <= len2; i++)
    {
        s1[len1+i]=s2[i];
    }
    printf("After concatation is: %s",s1);
}
