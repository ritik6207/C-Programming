#include <stdio.h>
int main()
{
    char ch = 'a'-1;
    int i,j,k,n;
    printf("Enter number of Rows:\n");
    scanf("%d",&n);
    printf("You entered Rows >> %d\n",n);
    for ( i = 1; i <= n; i++)
    {
        for ( k = 1; k <= (n-i); k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf(" %c",ch+j);
        }
        printf("\n");
        
    }
    
    return 0;
}
