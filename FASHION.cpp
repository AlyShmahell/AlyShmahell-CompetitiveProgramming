#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t,n,a[1001],b[1001],i,j,temp;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;i++)
        cin>>b[i];

        for(i=0;i<n;i++)
            for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
            if(b[j]<b[i])
            {
                temp=b[j];
                b[j]=b[i];
                b[i]=temp;
            }
        }
temp=0;
        for(int i=0;i<n;i++)
            temp+=(a[i]*b[i]);
        cout<<temp;
        if(t!=0)
            cout<<endl;
    }
}
