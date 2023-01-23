#include <stdio.h> 
void even_odd(int);
void main()
{
    int a;
    printf("Enter the number Even or odd:\n");
    scanf("%d",&a);
    even_odd(a);
}
void even_odd(int x)
{
    if(x%2==0)
    {
        printf("Number is Even:\n");
    }
    else
    {
        printf("Number is Odd:\n");
    }
}