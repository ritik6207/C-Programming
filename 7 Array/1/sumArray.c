#include <stdio.h>
int main()
{
    int a[5],b[5],c[5],i;
    printf("Enter element of first array:\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d\n",&a[i]);
    }
    printf("Enter element of second array:\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&b[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        c[i]=a[i]+b[i];
        printf("\nSum of third array at index %d is : %d",i,c[i]);
    }
    
    return 0;
}
