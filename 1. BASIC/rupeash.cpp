#include <iostream>
using namespace std;
int main()
{
    int n,i=1;
    cout<<"Enter number\n";
    cin>>n;
    int sum=0;
    while (i<=n)
    {
        sum=sum+i;
        i=i+1;
    }
cout<<"value of sum is "<<sum<<endl;
return 0;
}