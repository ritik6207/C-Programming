#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, n, *ptr1, *ptr2;
    printf("Enter the total number:\n");
    scanf("%d", &n);
    ptr1 = (int *)calloc(5, sizeof(int));
    printf("Enter the value:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr1 + i));
    }
    printf("you entered the value:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", *(ptr1 + i));
    }
    free(ptr1);

    printf("Enter the total number:\n");
    scanf("%d", &n);
    ptr2 = (int *)malloc(n * sizeof(int));
    printf("Enter the value:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr2 + i));
    }
    printf("you entered the value:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", *(ptr2 + i));
    }
    free(ptr2);
}