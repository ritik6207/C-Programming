#include <stdio.h>
int main()
{
    int a[]={12,23,45,76,89,26,32,78};
    int *p;
    p=a;
    // printf("%d\n",*p++);
    // printf("%d\n",*++p);
    // printf("%d\n",(*p)++);
    // printf("%d\n",++(*p));
    // printf("%d\n",*p--);
    // printf("%d\n",*--p);
    // printf("%d\n",(*p)--);
    // printf("%d\n",--(*p));
    /*printf("%d %d\n",*p++,*p++);   //output value print right to left
    printf("%d\n",*p);*/
    /*p=&a[3];
    printf("%d %d\n",*p--,*p--);   //output value print right to left
    printf("%d\n",*p);*/
    /*printf("%d %d\n",*++p,*++p);   //output value print right to left
    printf("%d\n",*p);*/
    /*p=&a[3];
    printf("%d %d\n",*--p,*--p);   //output value print right to left
    printf("%d\n",*p);*/
    p=&a[4];
    printf("%d %d %d %d %d %d\n",*p++,*++p,(*p)++,--(*p),*p--,*--p);
    printf("%d",*p);
    return 0;
}