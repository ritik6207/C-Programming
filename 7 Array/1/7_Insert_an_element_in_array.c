#include <stdio.h>
#define N 50
int main()
{
    int a[N], i, n, ins, pos;
    printf("How many numbers:?\n");
    scanf("%d", &n);
    printf("Enter %d element of array:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("\n");
        scanf("%d", &a[i]);
    }
    printf("\nEnter number to be inserted:\n");
    scanf("%d", &ins);
    printf("Enter position:\n");
    scanf("%d", &pos);
    for (i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos] = ins;
    n++;
    printf("\nAfter insertation:-\n");
    for (i = 0; i < n; i++)
    {
        printf("\n%d\n", a[i]);
    }

    return 0;
}
