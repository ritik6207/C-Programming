//This program based on sum of natural number:
#include<stdio.h>
int sum(int n)
{    int s;
    if(n<1)
        return n;
    s=n+sum(n-1);    //When a same function calling directlly or indirectlly it self, it is called Recursion
        return s;
}
void main()
{
    int a,n;
    printf("Enter the value of number:\n");
    scanf("%d",&n);
    a=sum(n);
    printf("sum of total natural number is = %d",a);
}