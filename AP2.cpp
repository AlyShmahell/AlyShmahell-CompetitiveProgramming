/*
* given the 3rd, 3rd last terms and sum of an arithmetic progression
* print the series and it's length
*/


#include<iostream>
#include<cmath>
using namespace std;



void counter(long long int a,long long int b,long long int s)
{
    if(s==0) cout<<endl;
    else
           {

               long long int n;
                        n=(2*s)/(b+a);
                        cout<<n<<endl;
               long long int t,d;

                       t=b-a;
                       d=(long long int) ceil((double) t/ (double)(n-5));

                            for(long long int i=-2; i<=n-3; i++)
                                {
                                    t=a+i*d;
                                    cout<<t<<" ";
                                }
                      cout<<endl;
            }
}

int main()
{
    long long int tc,a,b,f;
    cin>>tc;

    while(tc--)
    {
        cin>>a>>b>>f;
        counter(a,b,f);
    }
}
