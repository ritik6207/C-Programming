/*In a storge class these things are aviable, first is default value(any value or any garbag value) 
2nd is scope(programs, function/method, block) ,3rd is Location and 4th is lifetime
there are 4 type:-
1. automatic(auto)
2. static
3. Extern
4. Resister
*/
#include<stdio.h>
int a=25;       //program scope
void fun1(void);
int main()
{
    // int a=12;
    fun1();
    {
        int a=23;
        printf("inside block 1 %d\n",a);   //block scope
    }
    {
    printf("inside block 2 %d\n",a++);
    }
    printf("inside function 1 %d\n",a);  //function scope
}
void fun1()
{
    int a=45;
    printf("inside function 2 %d\n",a);
}