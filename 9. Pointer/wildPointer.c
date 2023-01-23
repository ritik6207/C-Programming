#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a=12;
    // int *ptr=(int*)mallco(sizeof(int));   //int *ptr; Unintilisze pointer is called Wild pointer or access random memory also is Wild pointer
    *ptr=&a;
    printf("%d\n",ptr);
}