#include <stdio.h>
int main()
{
    int a,b;
    int *x,*y,t;
    printf("Enter tow number:\n");
    scanf("%d %d",&a,&b);
    printf("Before swapping:\n");
    printf("X=%d\nY=%d",a,b);
    printf("\n\n");
    x=&a;
    y=&b;
    t=*y;
    *y=*x;
    *x=t;
    printf("After swapping:\n");
    printf("X: %d\nY: %d",*x,*y);
    return 0;
}