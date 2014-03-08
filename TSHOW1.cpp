#include<iostream>
#include<cmath>
#include<stack>
using namespace std;
stack<int>e;
int main()
{
    int t;
    long long int a,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>a;
        b=0;c=0;
        while(b<a)
        {
            c++;
            b=pow(2,c);
        }
        d=a-pow(2,c-1);
        if(b-a==1)
          while(c--)
                cout<<5;
            else if(b-a==0)
            { c--;
                while(c--)
                {
                cout<<5;
                }
                cout<<6;
                }
                else
                {
                    d++;
                    while(d!=0)
                    {
                        if(d%2==0)
                            e.push(5);
                        else
                            e.push(6);
                        d/=2;
                        c--;
                    }
                    c--;
                    while(c)
                    {
                        c--; e.push(5);}
                        while(!e.empty())
                        {
                            cout<<e.top();
                            e.pop();
                        }
                }
                if(t) cout<<endl;
    }
}
