#include <stdio.h>
int incr( int i)
{
    static int count=0;        //  Static used Hold previous value  
    count=count+i;
    return (count);
}
int main()
{
    int i,j;
    for(i=0;i<=4;i++)
        j=incr(i);
    printf("value of J is %d",j);
    return 0;
}