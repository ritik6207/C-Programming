#include <stdio.h>
int square();
void main()
{
    float area;
    printf("\nGoing to calculate of area of the square:\n");
    area=square();
    printf("Area of sqare is %f",area);
}
int square()
{
    float a,result;
    printf("Enter the length of square:\n");
    scanf("%f",&a);
    result=a*a;
    return result;
}