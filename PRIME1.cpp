#include <iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--)
    {
    int a,b;
        cin>>a>>b;
        if(a==1) a++;

        int p[b-a];

        for(int i=0;i<=b-a;i++)
         p[i]=1;

        for(int i=2;i*i<=b;i++)
        {
            int k=a/i;
            k*=i;
            for(int j=k;j<=b;j+=i)
              if(j!=i&&j>=a)
                p[j-a]=0;
        }

        for(int i=0;i<=b-a;i++)
        if(p[i]==1)
           cout<<a+i<<endl;

if(t) cout<<endl;

    }
}
