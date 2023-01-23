#include <stdio.h>

void sum()   //Defenation of Function
{
    int a,b,sum=0;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("Sum of two number is %d\n",sum);
}

void main()
{
    sum();   //calling of funciton
}