// No arguement without return type
#include <stdio.h>
void sum(void);
void sub(void);
void mul(void);
void main()
{
    sum();
    sub();
    mul();
}
void sum()
{
    int a,b,sum=0;
    printf("Enter the value of a nd b:\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("Sum of two number is %d:\n",sum);
}
void sub()
{
    int a,b,sub=0;
    printf("Enter the value of a nd b:\n");
    scanf("%d%d",&a,&b);
    sub=a-b;
    printf("Sub of two number is %d:\n",sub);
}
void mul()
{
    int a,b,mul=0;
    printf("Enter the value of a nd b:\n");
    scanf("%d%d",&a,&b);
    mul=a*b;
    printf("mul of two number is %d:\n",mul);
}