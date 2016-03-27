#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    long long int x,g,y,r,value,values[3],temp;
    string colors[3]= {"GREEN","YELLOW","RED"};
    cin>>t;
    while(t--)
    {
        cin>>x>>g>>y>>r;
        x++;
        values[0]=g;
        values[1]=y;
        values[2]=r;
        value = 0;
        while(x>=0)
        {
            temp = values[value%3];
            if(x-temp>=0)
                x-=temp;

            else
            {
                cout<<colors[value%3];
                if(t)
                    cout<<endl;
                break;
            }
                        value++;
        }
    }
}
