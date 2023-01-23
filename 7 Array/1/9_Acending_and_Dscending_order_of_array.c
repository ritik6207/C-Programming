#include <stdio.h>
#define N 50
int main()
{
    int arr[N],tmp[N],i,j,n,temp;
    printf("How many element, You want to print:\n");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter value of %d Elements: ",i+1);
        scanf("%d",&arr[i]);
        tmp[i]=arr[i];
    }
    for ( i = 0; i < n; i++)
    {
        for ( j= i+1; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                temp =arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            
        }
        
    }
    printf("\n-------------------------------------------");
    printf("\nOringinal\tAccending\tDescending");
    printf("\n-------------------------------------------");
    for ( i = 0,j=n-1; i < n; i++,j--)
    {
        printf("\n%d\t\t%d\t\t%d",tmp[i],arr[i],arr[j]);
    }
    printf("\n-------------------------------------------");
    return 0;
}
