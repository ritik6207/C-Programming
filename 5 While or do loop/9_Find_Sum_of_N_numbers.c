//Find sum of N numbers
#include <stdio.h>
int main()
{
	int num,sum=0;
	printf("Enter the numbers:\n");
	scanf("%d",&num);
	while(num>0)
	{
		sum=sum+num;
		num--;
	}
	printf("Sum of total numbers::%d",sum);
	return 0;
}