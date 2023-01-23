#include <stdio.h>
int main()
{
    int a=10,b=5;
    int *p,*q;
    p=&a;
    q=&b;  
    // *q=*p;      //if you want q=p then q=&b discard it
    // q=p;
    printf("value of a = %d %d %d",a,*p,*q);
    return 0;
}
