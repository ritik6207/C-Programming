#include <stdio.h>
char fun();  //function decleration
void main()  //Function calling,   calling function.
{
    char s1;
    s1=fun();
    printf("Print is %c\n",s1);
}
char fun() //Function defecation  ,  called function
{
    char ch;
    printf("Enter a character:\n");
    scanf("%c",&ch);
    return ch;
}