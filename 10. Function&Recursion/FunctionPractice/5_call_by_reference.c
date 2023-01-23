#include <stdio.h>
void cube(int*);
void main()
{
    int a=10;
    cube(&a);
    printf("\n a = %d",a);
}
void cube(int *x)
{
    *x=(*x)*(*x)*(*x);
    printf("\n x = %d",*x);
}