#include <stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter number of Rows:\n");
    scanf("%d",&n);
    printf("You Entered Rows >> %d\n",n);
    for (i = 1; i <=n; i++)
    {
        for ( k = 1; k < i; k++)
        {
            printf(" ");
        }
        for (j = i; j <=n; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}
