#include <stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter any number:\n");
    scanf("%d",&n);
    for ( i = 1; i <n; i=i+2)
    {
        printf("%d + ",i);
        sum=sum+i;
    }
    printf("%d",n);
    printf("\nSum = %d",sum+n);
    return 0;
}
