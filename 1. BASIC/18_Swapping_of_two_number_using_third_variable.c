//Swapping of two number using third variable
#include <stdio.h>

int main()
{
    int a,b,temp;
    printf("Enter the value of A:\n");
    scanf("%d",&a);
    printf("Enter the value of B:\n");
    scanf("%d",&b);
    printf("\nBefore swapping:\n");
    printf("A = %d\nB = %d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swapping:\n");
    printf("A = %d\nB = %d",a,b);
    return 0;
}