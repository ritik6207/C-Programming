#include <stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter number of Rows:\n");
    scanf("%d",&n);
    printf("You entered Rows >> %d\n",n);
    for ( i = 1; i <=n; i++)
    {
        for ( j = 1; j <=i; j++)
        {
            if (i%2==0&&j%2!=0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
            
        }
        printf("\n");
    }
    
    return 0;
}
