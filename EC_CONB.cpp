#include <iostream>
#include <math.h>
#include <stack>
using namespace std;

stack <long long int> a;

long long int bin(long long int x)
{
    while (x!=0)
    {
        a.push(x%2);
        x/=2;
    }

    x=0;
    long long int i=0;
    while(!a.empty())
    {
        x+=a.top()*pow(2,i);
        a.pop();
        i++;
    }
    return x;
}

int main()
{
    int n;
    long long int x;
    cin>>n;
    while (n--)
    {
        cin>>x;
        if(x%2==0)
        {
            cout<<bin(x);
        }
        else
            cout<<x;
        if (n>=1)
            cout<<endl;
    }
}
