// store in RAM
#include<stdio.h>
// auto int a=50;   // in this gobal variable case give error
int main()
{
   auto int a=23;   //also write int a, if i will write int a=23 by default considered auto type in storage calss
   {
    auto int a=34;
    printf("inside block %d\n",a);
   }
   printf("inside function %d",a);
   return 0;
}