//this program is wrong , i will try later.
#include<stdio.h>
int pri(int);
void main()
{
    int n;
    printf("Enter the value of number:\n");
    scanf("%d",&n);
    if (pri(n)==1)
    {
        printf("\t%d is prime:\n",n);
    }
    else
    {
        printf("\t%d is not prime:\n",n);
    }
}
int pri(int m)
{
    int i;
    for ( i = 2; i <= m/2; i++)     //3
    {
        if (m%i==0)
        {
            return 1;
        }
    }
    return 2;
}