     /*
    1
   12
  123
 1234
12345
   */
#include <stdio.h>
int main()
{
	int i,j,n,k;
	printf("Enter number of rows:\n");
	scanf("%d",&n);
	printf("you entered rows >> %d\n",n);
	for(i=1;i<=n;i++)
	{ 
	   for(k=1;k<=n-i;k++)
	   {
	   	printf(" ");
	   }
	   for(j=1;j<=i;j++)
	   {
	   	printf("%d",j);
	   }
	   printf("\n");
	}
	return 0;
}