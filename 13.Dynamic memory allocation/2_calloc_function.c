/*void* calloc(size_t_NoOfElement, size_sizeOfElement), return type is void pointer
size_t_NoOfElement=NO.of.block
full form of calloc is contigeous Memory
*use to dynmacally allocate multiple block of memory and each block is of same size
in calloc function also use type casting
*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,n,*ptr;
    printf("Enter the Total number:\n");
    scanf("%d",&n);
    ptr=(int*)calloc(5,sizeof(int));  //here no of block is 5 and type casting in int type
    printf("enter the value\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("you entered the value\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",*(ptr+i));
    }
    free(ptr);
}