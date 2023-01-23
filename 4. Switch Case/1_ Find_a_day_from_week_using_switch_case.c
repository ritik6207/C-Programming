//Week program
#include <stdio.h>
int main()
{
	int day;
	printf("Enter day number:>>\n");
	scanf("%d",&day);
	switch(day)
	{
		case 1:
	    {
			printf("Monday");
			break;
		}
		case 2:
	    {
			printf("Tuesday");
			break;
		}
		case 3:
	    {
			printf("Wednesday");
			break;
		}
		case 4:
	    {
			printf("Thursday");
			break;
		}
		case 5:
	    {
			printf("Friday");
			break;
		}
		case 6:
	    {
			printf("Sautarday");
			break;
		}
		case 7:
	    {
			printf("Sunday");
			break;
		}
		default:
			{
				printf("Invalid day number:\n");
			}
			printf("Have a nice day\n");
	}
	return 0;
}