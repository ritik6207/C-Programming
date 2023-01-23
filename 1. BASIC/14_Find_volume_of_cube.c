//Find volume of cube
#include <stdio.h>

int main()
{
    int l,b,h,v;
    printf("Enter the value of lenght:\n");
    scanf("%d",&l);
    printf("Enter the value of hight:\n");
    scanf("%d",&h);
    printf("Enter the value of breath:\n");
    scanf("%d",&b);
    v=l*h*b;
    printf("Volume of Cube %d",v);
    return 0;
}
