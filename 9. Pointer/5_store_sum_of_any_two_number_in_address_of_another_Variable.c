#include <stdio.h>
int main()
{
    int a,b,c;
    int *p1,*p2,*p3;
    p1=&a;
    p2=&b;
    printf("Enter two number:\n");
    scanf("%d%d",p1,p2);
    p3=&c;
    *p3=*p1+*p2;
    printf("\nsum of two number is %d\n",*p3);
    return 0;
}