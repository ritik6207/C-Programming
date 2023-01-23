#include <stdio.h>
void sum(void);
void sub(void);
void mul(void);
void div(void);
void main()
{
    sum();
    sub();
    mul();
    div();
}
void sum()
{
    int a,b,sum=0;
    printf("Enter the value of A and B:\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("Sum of two number is %d:",sum);
    
}
void sub()
{
    int a,b,sub=0;
    printf("\nEnter the value of A and B:\n");
    scanf("%d%d",&a,&b);
    sub=a-b;
    printf("Sub of two number is %d:",sub);
}
void mul()
{
    int a,b,mul=0;
    printf("\nEnter the value of A and B:\n");
    scanf("%d%d",&a,&b);
    mul=a*b;
    printf("Mul of two number is %d:",mul);
}
void div()
{
    int a,b,div=0;
    printf("\nEnter the value of A and B:\n");
    scanf("%d%d",&a,&b);
    div=a/b;
    printf("Div of two number is %d:",div);
}