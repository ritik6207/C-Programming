//Sum,Sub,Mul,and Div Example
#include <stdio.h>

int main()
{
    int a=15,b=6,c,r;
    float d;
    printf("The value of a=%d",a);
    printf("\nThe value of b=%d",b);
    c=a+b;
    printf("\nsum=%d",c);
    c=a-b;
    printf("\nSubtract=%d",c);
    c=a*b;
    printf("\nMultiplication=%d",c);
    d=a/b;
    printf("\nDivision=%0.3f\n",d);
    r=a%b;
    printf("Remainder=%d",r);
    return 0;
}