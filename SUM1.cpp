#include<iostream>
#include<cmath>
using namespace std;

unsigned long long int  counter(unsigned long long int i)
{
    return (i*(i+1)/2);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long long int a,b,c,d;

        cin>>a;
        b=ceil((double)a/3.00)-1;
        c=ceil((double)a/5.00)-1;
        d=ceil((double)a/15.00)-1;


        cout<<3*counter(b)+5*counter(c)-15*counter(d)<<endl;
    }
}
