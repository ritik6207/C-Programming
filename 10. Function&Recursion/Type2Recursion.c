#include<stdio.h>
int pr(int);
void main()
{
    pr(10);
}
int pr(int n)
{
    if(n<1)
        return;
    else
      printf("%d\n",n);  
    pr(n/2);                 //direct recursion, fuction call in self function
}