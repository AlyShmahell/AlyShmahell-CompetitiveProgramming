#include <iostream>
using namespace std;

int main()
{
    long long int n,result=0;

    while(cin>>n)
    {
        if (n==0)
            break;
       result = (n*n*(n+1)/2)-((n*(n-1)*(n+1)/6));
            cout<<result<<endl;
    }
}
