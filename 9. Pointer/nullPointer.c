#include <stdio.h>
int main()
{
    int *ptr1=NULL;
    int *ptr2=NULL;
    if (ptr1==ptr2)
    {
        printf("This is Null pointer:\n");
    }
    else
    {
        printf("This is not Null pointer:\n");
    }
    printf("%d",*ptr1);
    return 0;
}
