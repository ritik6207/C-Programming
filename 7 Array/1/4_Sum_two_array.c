#include <stdio.h>
#define N 50
int main()
{
    int a[N],b[N],c[N],i,n;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    printf("Enter element of first array:\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element of second array:\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Sum of two array:-\n");
    for ( i = 0; i < n; i++)
    {
        c[i]=a[i]+b[i];
        printf("%d\n",c[i]);
    }
    return 0;
}
