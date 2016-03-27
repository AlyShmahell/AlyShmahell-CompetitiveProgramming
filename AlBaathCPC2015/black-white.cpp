#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    long long int n,b,w;
    cin>>t;
    while(t--)
    {
        cin>>n>>b>>w;
        if(abs(b-w-1)%2==0)
            cout<<"Mikael\n";
        else
            cout<<"Steven\n";
    }
}
