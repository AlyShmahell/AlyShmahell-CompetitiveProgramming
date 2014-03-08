#include<iostream>
using namespace std;

int ret(int n,int k,int f)
{
    int e=k;
    if(e==f)
        return e+n;
    else
    {
         if(f<=n*k)
         {
             for(int i=1;i<=n;i++)
             {
                 e=k*i+n-i;
                 if(e==f) {return e+i; break; }
             }
         }
         else
         {
            int temp=n*k;
            int sum=temp+n;
            int i=1;
            while(e<=f)
            {
                e=k+temp-1;
                sum+=k;
                if(e==f) {return sum; break;}
                temp=e;
            }
         }
    }
}

int main()
{
    int test_case,n,k,t,f;

    cin>>test_case;

    while(test_case--)
    {
        cin>>n>>k>>t>>f;

        cout<<ret(n,k,f);
        if (test_case>=1)
            cout<<endl;
    }
}
