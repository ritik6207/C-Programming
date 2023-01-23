#include <stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter number of Rows:\n");
    scanf("%d",&n);
    printf("You entered Rows >> %d\n",n);
    for ( i = n; i >=1; i--)
    {
        for (j = i;j >=1; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
    return 0;
}
