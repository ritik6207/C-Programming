//Find differenciate in rupees and paisa
#include <stdio.h>

int main()
{
    int r,p;
    float a;
    printf("Enter total amount:\n");
    scanf("%f",&a);
    r=a;
    printf("total rupees:= %d\n",r);
    p=(a-r)*100;
    printf("total paisa:= %d\n",p);
    return 0;
}