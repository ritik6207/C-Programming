#include<stdio.h>
int fact(int);
void main()
{
    int n,ans;
    printf("Enter the number:\n");
    scanf("%d",&n);
    ans=fact(n);
    printf("Factriol is: %d",ans);
}
int fact(int n)
{
    int facto=1;
    if (n==1)
    {
        return facto;
    }
    else
    {
        facto=n*fact(n-1);
        return facto;
    }
}