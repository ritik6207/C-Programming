#include <stdio.h>
#include <stdlib.h>
int main()
{
   int *ptr;
   int ch = 1;
   while (ch < 50)
   {
      printf("Memory Leak Damo:\n");
      ptr = (int *)malloc(40000 * sizeof(int));
      printf("continue?? press 1 of continue:\n");
      scanf("%d", &ch);
      free(ptr); // if u don't use free functio than memory take large space
   }
}