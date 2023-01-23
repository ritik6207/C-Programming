#include <stdio.h>
int main()
{
    int a=10;
    int *p,**PP,***ppp,****pppp;
    p=&a;
    printf("\n p = %u",p);
    printf("\n *p = %u",*p);
    pp=&p;
    printf("\n\n pp = %u",pp);
    printf("\n *pp = %u",*pp);
    printf("\n **pp = %u",**pp);
}