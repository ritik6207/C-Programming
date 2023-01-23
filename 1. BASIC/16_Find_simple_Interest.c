//Find simple Interest
#include <stdio.h>

int main()
{
    float i,p,r,t;
    printf("Enter the value of p:\n");
    scanf("%f",&p);
    printf("Enter the value of r:\n");
    scanf("%f",&r);
    printf("Enter the value of t:\n");
    scanf("%f",&t);
    i=(p*r*t)/100;
    printf("Interest = %f",i);
    return 0;
}