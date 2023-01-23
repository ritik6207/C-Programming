       /*
54321
5432
543
54
5
      */
#include <stdio.h>
int main()
{
	int i,j,n;
	printf("Enter number of rows:\n");
	scanf("%d",&n);
	printf("You entered Rows >> %d\n",n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
