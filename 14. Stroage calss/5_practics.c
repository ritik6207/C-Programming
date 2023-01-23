#include<stdio.h>
int fun()
{
    static int a=16;
    return a--;
}
int main()
{
    for(fun();fun();fun())
    printf(" %d",fun());
}


/*#include<stdio.h>
int a;
int main()
{
   printf("value of a is %d",a);
   return 0;
}*/