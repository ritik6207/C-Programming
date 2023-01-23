#include <stdio.h>
int main()
{
    int a[3],sum=0,i;
    printf("Enter element of array:\n");
    for ( i = 0; i < 3; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < 3; i++)
    {
        sum=sum+a[i];
    }
    printf("sum = %d",sum);
    return 0;
}
