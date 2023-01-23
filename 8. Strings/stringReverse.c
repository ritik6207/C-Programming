#include <stdio.h>
#include <string.h>
int main()
{
   char s1[30];
   printf("Enter string:  ");
   gets(s1);
   printf("\nBefor reverse:  %s",s1);
   strrev(s1);
   printf("\nAfter reverse:  %s",s1);
    return 0;
}
