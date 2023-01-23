#include <stdio.h>
int main()
{
    int a=34;
    float b=4.23;
    char c= 'R';
    void *vp;
    vp=&a;
    printf("a=%d\n",*(int*)vp);
    vp=&b;
    printf("b=%f\n",*(float*)vp);
    vp=&c;
    printf("c=%c\n",*(char*)vp);
    return 0;
}
