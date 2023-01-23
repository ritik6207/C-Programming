// No argument with return type
#include <stdio.h>
int sum(void);
void main()
{
    int s;
    s=sum();
    printf("Sum = %d\n",s);
}
int sum()
{
    int a,b,sum=0;
    printf("Enter the value of a and b:\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    return sum;
    // return a+b;
    // return sum,a,b;    //In this case return work just like Comma(,) Operator "Right to left"

    /*return a+b;      // In this case return work 1st...
    return a;*/        // not 2nd
}