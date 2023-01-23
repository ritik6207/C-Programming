//find x^y,   ex:- x=5,y=2     5^2=25
#include<stdio.h>
float po(int,int);
void main()
{
    int x,y;
    float ans;
    printf("Enter the value of X , Y:\n");
    scanf("%d%d",&x,&y);
    ans=po(x,y);
    printf("You answer is: %.2f",ans);
}
float po(int a,int b)
{
    float k=1;
    if (b>0)
    {
        while (b>0)
        {
            k=k*a;
            b--;
        }
        
    }
    return k;
}