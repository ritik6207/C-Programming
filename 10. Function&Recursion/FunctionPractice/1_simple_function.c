#include <stdio.h>
void printline(void);
void main()
{
    printline();
    printf("\nIt is the progrmming!\n");
    printline();
}
void printline()
{
    int i;
    for ( i = 1; i <= 21; i++)
    {
        printf("_");
    }
    
}