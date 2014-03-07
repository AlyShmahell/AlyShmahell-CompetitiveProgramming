#include<iostream>
using namespace std;
int main()
{
    long long int a,b,c;
    while(cin>>a>>b>>c)
    {
        if(a==0&&b==0&&c==0)
            break;
            else
            {
       if((c-b)==(b-a))
       {
           cout<<"AP "<<c+(c-b);
       }
       else
       {
           cout<<"GP "<<c*(c/b);
       }
        cout<<endl;
            }

    }
}
