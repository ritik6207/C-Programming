#include <stdio.h>
#define N 50
int main()
{
    int a[N], i, j, n, del;
    printf("How many number:\n");
    scanf("%d", &n);
    printf("Enter %d element of array:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter number for delet from array:\n");
    scanf("%d", &del);
    for (i = 0; i < n; i++)
    {
        if (a[i] == del)
            break;
    }
    for (j = i; j < n; j++)
    {
        a[i] = a[i + 1];
    }
    n--;
    printf("After deletion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}
