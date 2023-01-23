#include <stdio.h>
#include <stdlib.h>
int* f()
{
    int a=10;
    return &a;
}
void main()
{
    /*{
        int a=5;
        int *p=&a;
        printf("%d\n",*p);
    }*/
   /*int *p=(int*)malloc(sizeof(int));
   *p=10;
    printf("%d\n",*p);
    free(p);
    p=NULL;
    printf("%d\n",p);*/
    int *p=f();
    printf("%d\n",*p);
}
