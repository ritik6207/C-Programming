#include <stdio.h>
#define N 50
int main()
{
    int a[N],n,i;
    printf("Enter size of Arrray:\n");
    scanf("%d",&n);
    printf("Enter %d positive element \n",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEven number:-\n");
    for ( i = 0; i < n; i++)
    {
        if (a[i]%2==0)
        {
            printf("%d ",a[i]);
        }
        
    }
    printf("\nOdd number:-\n");
    for ( i = 0; i < n; i++)
    {
        if (a[i]%2!=0)
        {
            printf("%d ",a[i]);
        }
        
    }
    
    return 0;
}
