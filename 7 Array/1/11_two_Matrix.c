#include <stdio.h>
#define N 50
int main()
{
    int a[N][N],b[N][N],c[N][N],i,j,m,n,p,q;
    printf("Enter number of Row and Coloun of first Matrix:\n");
    scanf("%d%d",&m,&n);
    printf("Enter element of first matrix:\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("Enter number of Row and Coloun of second Matrix:\n");
    scanf("%d%d",&p,&q);
    printf("Enter element of second matrix:\n");
    for ( i = 0; i < p; i++)
    {
        for ( j = 0; j < q; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }
    printf("First Matrix is:-\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("second Matrix is:-\n");
    for ( i = 0; i < p; i++)
    {
        for ( j = 0; j < q; j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
