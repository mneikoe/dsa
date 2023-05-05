#include <iostream>
using namespace std;
int main ()
{
    cout<<"enter size of your array"<<endl;
    int n;
    cin >>n;
    int a[n];
    cout<<"enter elements of array"<<endl;
    
    for(int i=0; i<n; i++)
    cin >>a[i];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum +=a[i];
    }
    cout<<sum<<endl;
    return 0;
    
}