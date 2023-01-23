#include <stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter number of Rows:\n");
    scanf("%d",&n);
    printf("You entered rows >> %d\n",n);
    for (i = 0; i <= n; i++)
    {
        for (k = n; k >=i; k--)
        {
            printf(" ");
        }
        for ( j = i; j >= 0; j--)
        {
            printf("%d",j);
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        
        printf("\n");
    }
    
    return 0;
}
