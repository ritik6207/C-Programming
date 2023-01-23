#include <stdio.h>
int main()
{
    int a=10,b=a-1,c;
    int *p,*q;
    p=&a;
    q=&b;
    c=*p;
    // *p=20;
    printf("Value of a=%d\n",a);
    printf("Value of a=%d\n",*p);
    printf("addresh of a=%x\n",&a);
    printf("Addresh of a=%x\n",p);
    printf("addresh of p=%x\n",&p);
    printf("value of b=%d\n",b);
    printf("value of b=%d\n",*q);
    printf("addresh of b=%x\n",&b);
    printf("addresh of b=%x\n",q);
    printf("addresh of q=%x\n",&q);
    printf("value of c=%d\n",c);
    // printf("a=%d\n",a);
    // printf("a=%x\n",p);
    return 0;
}
