#include<iostream>
using namespace std;

int main()
{   long long int x,y;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
         if((y==x-2)||(y==x))

        {
            if(x%2==0)
                cout<<y+x;
            else
                cout<<y+x-1;
        }
        else
                cout<<"No Number";

        if(t!=0)
            cout<<endl;
}
}
