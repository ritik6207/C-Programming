#include <stdio.h>
int main()
{
    int i,j,r,k=1;
    printf("Enter the range:\n");
    scanf("%d",&r);
    printf("FLOYD'S TRIANGLE\n\n");
    for ( i = 1; i <=r; i++)
    {
        for ( j = 1; j <=i; j++,k++)
        {
            printf(" %d",k);
        }
        printf("\n");
    }
    
    return 0;
}
