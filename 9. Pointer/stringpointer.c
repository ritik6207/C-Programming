#include <stdio.h>
int main()
{
    char s[]="Wellcome to Ritik in C language:";
    char *p=s;
    printf("%c\n",*p);
    // printf("Addersh is %s\n",p);
    printf("%c\n",*(p++ +1)); // p++ = W , W+3= Z, Print ASCII value
    printf("%c\n",*((p-- +5)-1)+3); // 
    printf("%c\n",*(++p +9)-32);
    printf("%c %c %c\n",*p,*++p,*--p);
    return 0;
}
