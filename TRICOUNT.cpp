#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    unsigned long long int n;
    cin>>t;
    while(t--)
    {
    cin>>n;
    cout<<(n*(n+2)*(2*n+1)/8)<<endl;
    }
}
