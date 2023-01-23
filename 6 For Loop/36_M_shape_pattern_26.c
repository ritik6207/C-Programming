#include <stdio.h>
int main()
{
    int n=5,j,i;
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            if ((j==2 || j==3 || j==4)&&(i==1))
            {
                printf(" ");
            }
            else if((j==3)&&(i==2))
            {
                printf(" ");
            }
            else if((j==2 || j==4)&&(i==3))
            {
                printf(" ");
            }
            else if((j==2 || j==3 || j==4)&&(i==4))
            {
                printf(" ");
            }
            else if((j==2 || j==3 || j==4)&&(i==5))
            {
                printf(" ");
            }
            else
            {
               printf("*");
            }
            
        }
        printf("\n");
    }
    
    return 0;
}
