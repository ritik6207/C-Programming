//Swapping of two number without third variable
#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter the value of A:\n");
    scanf("%d",&a);                        //20
    printf("Enter the value of B:\n");
    scanf("%d",&b);                        //23
    printf("\nBefore swapping:\n");
    printf("A = %d\nB = %d",a,b);              //a=20,b=23
    a=b+a;                                     //a=43
    b=a-b;                                     //b=20
    a=a-b;                                    //a=23
   /*use another method  // a=43-20=23
       a=a+b-(b=a);        //b=20                 
       */
    printf("\nAfter swapping:\n");
    printf("A = %d\nB = %d",a,b);
    return 0;
}