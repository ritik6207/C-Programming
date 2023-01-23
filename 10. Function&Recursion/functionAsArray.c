// take a example of avarage
#include <stdio.h>
int avg(int[],int);
void main()
{
    int marks[5]={12,34,56,23,67},size,avarage;
    size=sizeof(marks)/sizeof(marks[0]);
    avarage=avg(marks,size);
    printf("Avarage is %d\n",avarage);
    printf("Inside main size of array is(in byte) %d\n",sizeof(marks));
}
int avg(int marks1[], int size)
{
    int i, sum=0,avarage=0;
    for ( i = 0; i < size; i++)
    {
        sum=sum+marks1[i];
    }
    avarage=sum/size;
    printf("\nInside main size of array is(in byte) %d\n",sizeof(marks1));
    return avarage;
}