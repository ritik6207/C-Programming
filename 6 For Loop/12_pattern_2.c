       /*
*
**
***
****
*****
      */
#include <stdio.h>
int main()
{
	int i,j,n;
	printf("Enter number of rows:\n");
	scanf("%d",&n);
	printf("You entered Rows >> %d\n",n);
	for(i=i;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}