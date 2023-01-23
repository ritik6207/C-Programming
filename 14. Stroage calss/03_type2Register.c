//store in CUP processor
#include<stdio.h>
//gobla variable are not allow in register
int main()
{
    register int n=10,i,sum=0;
    for(i=1;i<=n;i++)
    sum=sum+i;
    printf("sum of total number is %d",sum);
}