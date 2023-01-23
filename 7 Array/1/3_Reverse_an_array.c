#include<stdio.h>
#define N 50
int main()
{
    int a[N],i,n;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    printf("Enter element of array:\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nBefore reverse:-\n");
    for ( i = 0; i < n; i++)
    {
        printf("Array element at index %d is %d:\n",i,a[i]);
    }
    printf("\nAfter reverse:-\n");
    for ( i = n-1; i >= 0; i--)
    {
        printf("Array element at index %d is %d:\n",i,a[i]);
    }
    return 0;
}
