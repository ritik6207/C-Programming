//Sum of digits of given numbers.
#include <stdio.h>
int main()
{
	long int n,s,sum=0;
	printf("Enter the numbers:\n");
	scanf("%ld",&n);
	while(n>0)
	{
		s=n%10;
		sum=sum+s;
		n=n/10;
	}
	printf("Sum of digits::%ld",sum);
	return 0;
}