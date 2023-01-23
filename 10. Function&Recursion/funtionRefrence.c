// Fuction refrence is print addrece of a value 
#include <stdio.h>

void fun(int* , int*);
void main()
{
    int x=8,y=5;
    fun(&x,&y);
    printf("inside main(callint function:)\n");
    printf("x=%d y=%d\n",x,y);
}
void fun(int *x,int *y)
{
    *x=5,*y=8;
    printf("inside fun(called function:)\n");
    printf("x=%d y=%d\n",*x,*y);
}