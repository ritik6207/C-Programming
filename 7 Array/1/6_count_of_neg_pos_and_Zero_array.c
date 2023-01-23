#include <stdio.h>
#define N 50
int main()
{
    int a[N],i,n,neg=0,pos=0,zero=0;
    printf("How many number:\n");
    scanf("%d",&n);
    printf("\nEnter %d integers element:\n",n);
    for ( i = 0; i < n; i++)
    {
        printf("\n");
        scanf("%d",&a[i]);
        if (a[i]>0)
        {
            pos++;
        }
        else if (a[i]<0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
    }
    printf("\nPositive element is : %d\n",pos);
    printf("\nNegitive element is : %d\n",neg);
    printf("\nZero element is : %d\n",zero);
    return 0;
}
