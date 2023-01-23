// Argument with return type
#include <stdio.h>
int sum(int , int );
void main()
{
    int x,y,s;
    printf("Enter the value of X and Y:\n");
    scanf("%d%d",&x,&y);
    s=sum(x,y);
    printf("Sum=%d",s);
}
int sum(int a,int b)
{
    return a+b;
}