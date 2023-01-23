#include <stdio.h>
#define N 50
int main()
{
    int a[N][N],i,j,m,n;
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
    printf("Transpose Matrix is:\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
