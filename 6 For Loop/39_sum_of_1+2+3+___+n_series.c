#include <stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the number i.e max value of series:\n");
    scanf("%d",&n);
    sum=(n*(n+1))/2;
    printf("Sum of the series:= %d\n ",sum);
    for ( i = 1; i <= n; i++)
    {
        if (i!=n)
        {
            printf("%d + ",i);
        }
        else
        {
            printf("%d = %d",i,sum);
        }
        
    }
    
    return 0;
}
