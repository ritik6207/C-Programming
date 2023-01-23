#include <stdio.h>
int addn(int);
void main()
{
    // int addn(int);     //function deceleartion also write here.
    int n,ans;
    printf("Enter the N number:\n");
    scanf("%d",&n);
    ans=addn(n);
    printf("Sum of N number is: %d",ans);
}
int addn(int a)
{
      int total;
      for (int i = 1; i <= a; i++)
      {
         total += i;
      }
      return total;
}