#include<stdio.h>
union abc
{
    int a;
    char b;
    float c;
};

void main()
{
    union abc u;
    u.a=12;
    u.b='R';
    u.c=12.23;
    printf("%d %c %f",u.a,u.b,u.c);
}