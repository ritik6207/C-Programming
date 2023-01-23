#include <stdio.h>
void sum(int , float);
void main()
{
    int a;
    float b;
    printf("Enter the value Of a nd b:\n");
    scanf("%d%f",&a,&b);
    sum(a,b);
}
void sum(int x, float y)
{
    float sum=0;
    sum = x+y;
    printf("Sum = %f",sum);
}