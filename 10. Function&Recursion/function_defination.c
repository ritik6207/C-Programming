#include <stdio.h>
void sum(int,int);
void main()
{
    sum(8,8);
}
void sum(int a,int b)  //Hadder of function
{
    int sum;
    sum=a+b;                              //Body of function
    printf("Sum of number: %d\n",sum);
}