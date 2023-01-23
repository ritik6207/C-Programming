//calculate sum of number of marks and avarage
#include <stdio.h>
int main()
{
    int marks[5];
    int i;
    float sum=0,avg;
    printf("Enter marks of student\n");
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&marks[i]);
    }
    for ( i = 0; i <5; i++)
    {
        sum=sum+marks[i];
    }
    avg=sum/5;
    printf("sum=%0.3f",sum);
    printf("\navarage=%0.3f",avg);
    return 0;
}
