#include<iostream>
using namespace std;

int main()
{long long int k;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>k;
        if(k%2==0)
            cout<<442+((k-1)/2)*500;
        else
            cout<<192+(k/2)*500;
        if(t!=0) cout<<endl;
    }
}
