#include <stdio.h>
int main()
{
    int a[] = {2, 4, 1, 0, 6, 2, 45, 78};
    int *p = a;
    int *q = &a[3];
    printf("p-q = %d\n", p - q);
    printf("q-p=%d\n", q - p);
    printf("value of p =%d\n", *p);
    printf("value of q =%d\n", *q);
    /*p=p-3;
    printf("value of p = %d\n",p);
    q=q-1;
    printf("q= %d\n",q);
    printf("value of q=%d\n",*q);*/
    p = p + 5;
    printf("value of p is %d\n", q - p);
    return 0;
}
