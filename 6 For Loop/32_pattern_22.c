#include <stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter number of Rows:\n");
    scanf("%d",&n);
    printf("you entered rows >> %d\n",n);
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            if (i==1 || j==1 || i==n || j==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
    
    return 0;
}
