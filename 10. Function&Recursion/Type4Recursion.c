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
      printf("%d ",n);  
    pr(n/2);                         //Non-Tail(not end) recursion,  
        printf("%d",n);           
}



/*#include<stdio.h>
int pr(int);
void main()
{
    int x;
    x=pr(10);
    printf("%d",x);
}
int pr(int n)
{
    if(n<1)
        return;
    else
       return 1+pr(n/2);           
}*/