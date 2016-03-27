#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    long long int n;
    long long int x,y,z;
    cin>>t;
    while(t--)
    {
        x=y=z=0;
        cin>>n;
        y=3*n/4+n/8;
        z=2*y-n;
        x=n/2+y;

        if(x+y+z==3*n)
            cout<<x<<" "<<y<<" "<<z<<endl;
        else
            cout<<"Impossible\n";
    }

}
