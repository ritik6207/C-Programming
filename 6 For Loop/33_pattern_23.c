#include <stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter number of Rows:\n");
    scanf("%d",&n);
    printf("You entered rows >> %d\n",n);
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("* ");
        }
        for ( k = 1; k <= 2*(n-i); k++)
        {
            printf(" ");
        }
        for ( j = 1; j <= i; j++)
        {
            if (i==n&&j==n)
            else
                printf(" ");
            
        }
        printf("\n");
    }
    
    return 0;
}
