#include<iostream>
using namespace std;

int main()
{
    long long int a,input,i,temp,t;
    cin>>t;
    while(t--)
    {
        cout<<endl;
        cin>>a;
        temp=0;

        if(a==-1)
          break;

        for(i=1;i<=a;i++)
        {
          cin>>input;
          temp=(temp+input)%a;
        }

            if(temp%a==0)
                                   cout<<"YES";
                    else
                                    cout<<"NO";

                                    if(t!=0) cout<<endl;

    }

}
