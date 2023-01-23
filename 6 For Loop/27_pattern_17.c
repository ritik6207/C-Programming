#include <stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter number of Rows:\n");
    scanf("%d",&n);
    printf("You entered Rows >> %d\n",n);
    for ( i = n; i >= 1; i--)
    {
        for ( k = 1; k <= (n-i); k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf(" %d",i);
        }
        printf("\n");
        
    }
    
    return 0;
}
