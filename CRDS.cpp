#include <iostream>
using namespace std;

int main()
{
    int t;
    long long int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<((n*(n-1)/2)+(n*(n+1)))%1000007<<endl;
    }
}
