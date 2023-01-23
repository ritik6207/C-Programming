#include <stdio.h>
#define N 50
int main()
{
    int a[N][N],i,j,m,n,sum=0;
    printf("Enter number of Row and Coloun of Matrix:\n");
    scanf("%d%d",&m,&n);
    printf("Enter element of matrix:\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("Matrix is:-\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (i==j)
            {
                sum=sum+a[i][j];
            }
            
        }
    }
    printf("Sum of the diagonal element of a Matrix is: %d",sum);
    return 0;
}
