/*void* malloc(size_t _size) , full form of malloc is Memory Allocation
store void pointer because memory don't konow which type of value store in Memory like int, float ,char ,doubble etc
if we want to store in memory int type we need to type casting
*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,*p;
    printf("Enter the total no of n:\n");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));   //type casting, if take float type then we use float type in int place 
    printf("Enter the value\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",(p+i));   //in this scanf no need to & because p is pointer variable who store address
    }
    printf("you entered number:\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",*(p+i));
    }
    free(p);     //using free function we can deletes previous storage in Heap memory
}