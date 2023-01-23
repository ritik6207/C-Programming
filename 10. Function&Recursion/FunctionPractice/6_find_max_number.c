#include<stdio.h>
int Max(int,int,int);
void main()
{
    int a,b,c,ans;
    printf("Enter the value of A B and C:\n");
    scanf("%d%d%d",&a,&b,&c);
    ans=Max(a,b,c);
    printf("Maximum number is: %d",ans);
}
int Max(int x,int y,int z)
{
    return (x>y&&x>z)?x:(y>x)?y:z;
}