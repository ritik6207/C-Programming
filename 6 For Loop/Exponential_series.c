#include <stdio.h>
#include <math.h>
int main()
{
    int x,n,fact,i,j;
    float sum=1;
    printf("Enter the 'X' value:\n");
    scanf("%d",&x);
    printf("\nEnter the 'n' value:\n");
    scanf("%d",&n);
    for ( i = 0; i<=n; i++)
    {
        fact =1;
        for ( j =i; j >= 1; j--)
        {
            fact = fact*j;
            sum=sum+(pow(x,i)/fact);
        }
        printf("\nSum of the series : %f ",sum);
    }
    
    return 0;
}
