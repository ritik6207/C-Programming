/*Reading array usig pointer and print it using pointer*/
#include <stdio.h>
int main()
{
    int i;
    int arr[20];
    int *ptr;
    ptr=arr;
    printf("Enter 5 element of array:\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
    ptr=arr;
    printf("Entered element:\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n",*ptr);
        ptr++;
    }
}