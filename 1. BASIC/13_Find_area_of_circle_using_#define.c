//Find area of circle using #define
#include <stdio.h>
#define PI 3.14
int main()
{
    float a,r;
    printf("Enter the value of radious:\n");
    scanf("%f",&r);
    a=PI*r*r;   
    printf("Area of circle is %.3f",a);
    return 0;
}