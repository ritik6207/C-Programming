//adding using scanf
#include <stdio.h>

int main()
{
   int a,b,c;
   
   printf("Enter the value of A and B:\n");
   scanf("%d%d",&a,&b);
   c=a+b;
   printf("sum = %d\n",c);
   return 0;
}