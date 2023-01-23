#include<stdio.h>
void sum(int a,int b)
{
    printf("sum=%d\n",a+b);
}
void sub(int a,int b)
{
    printf("sub=%d\n",a-b);
}
void disply(void (*fptr)(int,int))
{
    fptr(8,4);
}
void main()
{
    disply(sum);
    disply(sub);
}