#include <stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter number of Rows:\n");
    scanf("%d",&n);
    printf("You entered rows >>> %d\n",n);
    for ( i = 1; i <=n ; i++)
    {
        for (k = 1; k <= n-i; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        
        printf("\n");
    }
    for ( i = n-1; i >=1 ; i--)
    {
        for (k = 1; k <= n-i; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        
        printf("\n");
    }
    
    return 0;
}
