// if previous function given that like malloc/calloc , U can use relloc function otherwise not
// using relloc function u can incress/decress the size of given number  in malloc and calloc function
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n, i, *ptr;
    printf("Enter the total number:\n");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    printf("Enter the value:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }
    printf("Update previous  number:\n");
    scanf("%d", &n);
    int *ptr1;
    ptr1 = (int *)realloc(ptr, n * sizeof(int));

    printf("Updated value is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", *(ptr1 + i));
    }
    free(ptr1);
}