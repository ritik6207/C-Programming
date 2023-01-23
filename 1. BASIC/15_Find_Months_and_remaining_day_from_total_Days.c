//Find Months amd remaining day from total Days
#include <stdio.h>

int main()
{
    int a,b,r;
    printf("Enter the value of Total days:\n");
    scanf("%d",&a);
    b=a/30;
    printf("Months = %d\n",b);
    r=a%30;
    printf("Remaining Days = %d",r);
    return 0;
}