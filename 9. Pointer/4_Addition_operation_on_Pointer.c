/*#include <stdio.h>
int main()
{
    int p;
    int *ptr;
    ptr=&p;
    printf("Enter value:\n");
    scanf("%d",ptr);
    *ptr=*ptr+5;
    printf("Value of P is %d\n",p);
    printf("Value of ptr is %d\n",*ptr);
    return 0;
}*/
#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function  
    *a=*a+*b;
    *b=a-b;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
