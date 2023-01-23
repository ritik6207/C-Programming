//Find odd and even number of given element
#include <stdio.h>
int main()
{
    int a[10],i;
    int odd=0,even=0;
    printf("Enter the Number of element:\n");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
       
    }
    for ( i = 0; i < 10; i++)
    {
        if (a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        
    }
    
    printf("\n  Total Even element are: %d",even);
    printf("\n Total odd element are: %d",odd);
    return 0;
}
