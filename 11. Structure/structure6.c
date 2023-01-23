//Designated initialization Structure
#include<stdio.h>
struct abc
{
    int a;
    float b;
    int c;
};

void main()
{
    struct abc s={.b=12,.c=12.34,.a=23};
    printf("%d %f %d",s.a,s.b,s.c);
}