#include <iostream>
#include<algorithm>
#include<string>
#include<cmath>

using namespace std;



void cn()
{

    string s;
    int n;
    double x,y,a[1002];
    cin>>n;

    for(int i=0;i<n;i++)
     cin>>s>>a[i];

    sort(a,a+n);
    x=a[0];
    for(int i=1;i<n;i++)
    {
        a[i-1]=360.00-a[i]+a[i-1];
    }
a[n-1]-=x;

   sort(a,a+n);

        y=a[0];
        x=12.00*y;
        cout<<(int)(ceil(x));


    }


    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            cn();
            if(t!=0)
                cout<<endl;
        }
    }
