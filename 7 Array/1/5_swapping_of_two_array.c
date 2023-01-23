#include <stdio.h>
#define N 50
int main()
{
    int a[N],b[N],c[N],i,n;
    printf("Enter size of Array:\n");
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
    printf("Before swapping array:\n");
    printf("first array:-\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\n",a[i]);
    }
     printf("second array:-\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\n",b[i]);
    }
    for ( i = 0; i < n; i++)
    {
        c[i]=a[i];
        a[i]=b[i];
        b[i]=c[i];
    }
    printf("\nAfter swapping array:\n");
    printf("\nfirst array:-\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\n",a[i]);
    }
     printf("\nsecond array:-\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\n",b[i]);
    }
    return 0;
}
