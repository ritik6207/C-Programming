#include <stdio.h>
void sum();
void main()
{
    sum();
}
void sum(void)
{
    int a,b,sum=0;
    printf("Enter the value of a and b:\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("sum=%d",sum);
}