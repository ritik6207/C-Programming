//store in RAM
/*#include<stdio.h>
//global variable is allowed
int disply();
int main()
{
    int i;
    for(i=0;i<3;i++)
    disply();
}
int disply()
{
    static int x=5; // static is store previous value
      int y=5;
      x++;
      y++;
      printf("\nx=%d",x);
      printf("\ny=%d",y);
}*/

#include<stdio.h>
int disply();
int main()
{
    disply();
    disply();
}
int disply()
{
    static int x;       //store previous value x=0
    x+=10;
    printf("\nx=%d",x);    
}