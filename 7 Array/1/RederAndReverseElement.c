#include <stdio.h>
int main()
{
    int a[5];
    printf("Enter element of array\n");
    for (int i = 0; i <= 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nBefore reverse:-\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Array element at index %d is %d\n",i,a[i]);
    }
     printf("\nAfter reverse:-\n");
    for (int i = 4; i >= 0; i--)
    {
        printf("\nArray element at index %d is %d",i,a[i]);
    }
    
    return 0;
}
