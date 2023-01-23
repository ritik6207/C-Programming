// chek which number is max and min
#include <stdio.h>
int Max_min(int,int,int);
void main()
{
    int a,b,c,result;
    printf("Enter the value of A , B and C:\n");
    scanf("%d%d%d",&a,&b,&c);
    result=Max_min(a,b,c);
    printf("Maximum number is %d",result);
}
int Max_min(int a,int b,int c)
{
    return (a>b&&a>c)?a:(c<b)?b:c;
}