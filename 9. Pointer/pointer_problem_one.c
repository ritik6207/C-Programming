#include <stdio.h>
int main()
{
    const int a = -11;
    const int *p = &a;
    // *p = 10; // give an error  
    printf("%d\n", a);
}