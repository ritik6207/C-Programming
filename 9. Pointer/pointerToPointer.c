#include <stdio.h>
int main()
{
    int a=10;
    int *p=&a;
    int **q=&p;
    int ***r=&q;
    // *p=12;
    // **q=20;
    // ***r=120;
    printf("valueo of a=%d %d %d %d",a,*p,**q,***r);
    printf("\nAddresh of q=%x %x",&q,r);
    printf("\nAddresh of p=%x %x",&p,q);
    return 0;
}
