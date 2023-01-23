#include <stdio.h>
int main()
{
    int a=12;
    int *p=&a;
    printf("Address of a is: %u\n",&a);
    printf("Value of *p is: %d\n",*p);
    printf("Address of P is: %u\n",p);
    printf("Value of A is %d\n",a);
}