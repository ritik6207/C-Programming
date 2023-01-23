#include<stdio.h>
#include<stdlib.h>
int fun1();
int fun2();
int main()
{
    extern int x;
    printf("value of x=%d\n",x);
    fun1();
    fun2();
}
int fun1()
{
    int s=5;
    s++;
    printf("value of s=%d\n",s);
}
int fun2()
{
    int s=5,t=5,c;
    c=s+t;
    printf("value of s=%d\n",c);
}
int x=10;