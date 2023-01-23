#include <stdio.h>
int main()
{
    int i,j,k=1,n;
    char ch='A';
    printf("Enter number of Rows:\n");
    scanf("%d",&n);
    printf("You entered rows >> %d\n",n);
    for ( i = 1; i <= n; i++)
    {
        if ((i%2)==0)
        {
            for ( j = 1; j <= i; j++)
            {
                printf(" %d",k);
                k++;
            }
            
        }
        else
        {
            for ( j = 1; j <= i; j++)
            {
                printf(" %c",ch);
                ch++;
            }
            
        }
        printf("\n");
    }
    
    return 0;
}
