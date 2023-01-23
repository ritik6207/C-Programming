     /*
12345
1234
123
12
1   */
#include <stdio.h>
int main()
{
	int i,j,n;
	printf("Enter number of rows:\n");
	scanf("%d",&n);
	printf("you entered rows >> %d\n",n);
	for(i=n;i>=1;i--)
	{ 
	    for(j=1;j<=n;j++)
	    {
		if((i+j)<=n)
		 printf(" ");
		else
		 printf("%d",j); 
     	}
     	printf("\n");
	}
	
	return 0;
}