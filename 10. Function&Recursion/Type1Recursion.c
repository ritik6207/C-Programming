//this program based on factriol 
#include<stdio.h>
int fun1(int);
int fun2(int);
void main()
{
    int n;
    printf("Enter the value of N:\n");
    scanf("%d",&n);
    printf("%d",fun1(n));
}
int fun1(int n)
{
    if(n<1)
        return 1;
    return n*fun2(n-1);      // this is inderect recursion, function call in multiple function
}
int fun2(int n)
{
    if(n<1)
        return 1;
    return n*fun1(n-1);
}