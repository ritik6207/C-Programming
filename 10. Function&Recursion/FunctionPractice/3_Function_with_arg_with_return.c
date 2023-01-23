/*#include <stdio.h>
int soo(int);
void main()
{
    int a,ans;
    printf("Enter the value of A:\n");
    scanf("%d",&a);
    ans=soo(a);
    printf("The sum of is %d",ans);
}
int soo(int j)
{
    int i,k=0;
    for ( i = 1; i <= j; i+=2)
    {
        k+=i;
    }
    return k;
}*/



#include <stdio.h>
int soo(int);
void main()
{
    int a,ans;
    printf("Enter the value of A:\n");
    scanf("%d",&a);
    ans=soo(a);
    printf("The sum of is %d",ans);
}
int soo(int j)
{
    int i,k=0;
    for ( i = 1; i <= j; i++)
    {
        k = i*i;
    }
    return k;
}
