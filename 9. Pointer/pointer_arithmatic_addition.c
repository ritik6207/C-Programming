// Take input of array size and pointer in user
#include <stdio.h>
#define N 50
int main()
{
    int a[N], n, i, k;
    printf("Enter size of array :\n");
    scanf("%d", &n);
    printf("Enter element of array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter index of element u want to print:\n");
    scanf("%d", &k);
    int *p = &a[k];
    printf("value of index is: %d\n", *p);
    printf("Addresh of element is: %u\n", p); // Or  printf("Addresh of element is: %x\n",p);
    p = &a[k + 2];
    // *p=12;
    printf("value of index is: %d\n", *p);
    printf("Addresh of element is: %x\n", p);
    return 0;
}
// predefine arry size and pointer
/*#include <stdio.h>
int main()
{
    int a[]={2,4,1,6,8,9};
    int *p=&a[0];
    printf("value of index is %d\n",*p);
    printf("Addresh of index is %x\n",p);
    p=p+2;
    // *p=10;
    // p++;
    // p+1; = this is inviled
    printf("value of index is %d\n",*p);
    printf("Addresh of index is %x\n",p);
    return 0;
}*/
