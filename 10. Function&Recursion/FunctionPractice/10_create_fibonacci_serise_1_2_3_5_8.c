#include<stdio.h>
void fibo(int);
void main()
{
    int n;
    printf("Enter the value of number:\n");  
    scanf("%d",&n);
    fibo(n);

}
void fibo(int m)
{
    int i=0,t1=0,t2=1,t3;
    for(i=1;i<=m;i++)
    while (i<=m)
    {
        t3=t1+t2;
        t1=t2;
        t2=t3;
        printf("%d\t",t3);
        i++;
    }
    
}