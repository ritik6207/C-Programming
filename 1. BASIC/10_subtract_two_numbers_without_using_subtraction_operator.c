//subtract two numbers without using subtraction operator 
#include <stdio.h>

int main()
{
    int a,b,sum;
    printf("Enter the value of A and B:\n");
    scanf("%d%d",&a,&b);
    sum = a + ~b + 1;   //~b =  -(b+1).    for ex:- ~12 = -13
    printf("Difference of two integers: %d",sum);
    return 0;
}