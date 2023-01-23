#include <stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the range of number:\n");
    scanf("%d",&n);
    printf("You entered number: %d\n",n);
    for ( i = 1; i <= n; i++)
    {
        sum+=i;
    }
    printf("Sum of total Number = %d",sum);
    return 0;
}
