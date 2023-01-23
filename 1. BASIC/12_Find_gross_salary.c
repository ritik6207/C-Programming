//Find Gross salary Example
#include <stdio.h>

int main()
{
    float gs,bs,da,ta;
    printf("Enter basic salary:\n");
    scanf("%f",&bs);
    da=(bs*10)/100;
    ta=(bs*12)/100;
    gs=bs+da+ta;
    printf("Gross salary = %.3f",gs);
    return 0;
}